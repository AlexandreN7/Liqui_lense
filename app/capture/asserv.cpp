#include <QDebug>
#include "asserv.h"
#include "serialib.h"

using namespace std;

//#define DEVICE_PORT "/dev/ttyUSB0"                         // ttyUSB0 for linux
#define DEVICE_PORT "/dev/ttyACM0"



Asserv_thread::Asserv_thread()
{
    qDebug("Constructeur du Thread");
    C_buff = 0;
    delay_asserv = 100;
}


//external dependencies
extern double C_value;
extern bool stp;
extern int asserv_index;
extern int dicho_value;
extern int order_value;
extern int manual_state;
extern float manual_value;

float pas_initial = 100/dicho_value;


double Asserv_thread::get_C()
{
    this->msleep(delay_asserv);
    C_buff = C_value;

    return C_buff;
}


///////////////////////////////////asserv definition/////////////////////////////////:
void Asserv_thread::uart_config_asserv(){
    
    serialib LS;                                                            // Object of the serialib class
    int Ret;                                                                // Used for return values
    char Buffer[128];

    double command_memory = 0;

    pas_initial = 100/dicho_value;


    // Open serial port

    Ret=LS.Open(DEVICE_PORT,9600); // Open serial link at 57600 bauds

    if (Ret!=1)
    {                                                                       // If an error occured...
        cout<<"Error while opening port. Permission problem ?"<<endl;        // ... display a message ...
    }
    cout<<"Serial port opened successfully !"<<endl;




    double *C_values;
    C_values = new double[dicho_value+1];

    float *command;
    command = new float[dicho_value+1];

    command[0] = 0;

    char str[20]  = "";

    cout<<endl<<"Passage 1"<<endl;

    for(int j=0; j<dicho_value ; j++)
    {
        sprintf(str, "%f", command[j]);

        Ret=LS.WriteString("$");
        Ret=LS.WriteString(str);
        Ret=LS.WriteString("%");

        C_values[j] = get_C();
        command[j+1] = command[j] + pas_initial;

        cout<<"Comm. : "<<command[j]<<endl;
        cout<<"C_val : "<<C_values[j]<<endl;
    }


    sprintf(str, "%f", command[dicho_value]);
    Ret=LS.WriteString("$");
    Ret=LS.WriteString(str);
    Ret=LS.WriteString("%");


    C_values[dicho_value] = get_C();

    cout<<"Comm. : "<<command[dicho_value]<<endl;
    cout<<"C_val : "<<C_values[dicho_value]<<endl;
    cout<<endl<<endl;


    double min_diff;
    min_diff = C_values[0];

    int ind_min = 0;

    for(int j=1; j<=dicho_value ; j++)
    {
        if(C_values[j] < min_diff)
        {
            min_diff = C_values[j];
            ind_min = j;
        }
    }


    command_memory = ind_min * pas_initial;

    delete C_values;
    delete command;




    for(int i=1; i<order_value; i++)
    {

        cout<<endl<<"Passage "<<i+1<<endl;

        C_values = new double[dicho_value+1];
        command = new float[dicho_value+1];


        pas_initial = pas_initial / dicho_value;

        command[0] = command_memory - dicho_value*pas_initial/2;

        if(command[0] < 0)
            command[0] = 0;
        else if(command[0] > 100)
            command[0] = 100;


        for(int j=0; j<dicho_value ; j++)
        {
            sprintf(str, "%f", command[j]);
            Ret=LS.WriteString("$");
            Ret=LS.WriteString(str);
            Ret=LS.WriteString("%");
            C_values[j] = get_C();
            command[j+1] = command[j] + pas_initial;
            cout<<"Comm. : "<<command[j]<<endl;
            cout<<"C_val : "<<C_values[j]<<endl;
        }

        sprintf(str, "%f", command[dicho_value]);
        Ret=LS.WriteString("$");
        Ret=LS.WriteString(str);
        Ret=LS.WriteString("%");

        C_values[dicho_value] = get_C();

        cout<<"Comm. : "<<command[dicho_value]<<endl;
        cout<<"C_val : "<<C_values[dicho_value]<<endl;
        cout<<endl<<endl;


        min_diff = C_values[0];

        ind_min = 0;

        for(int j=1; j<=dicho_value ; j++)
        {
            if(C_values[j] < min_diff)
            {
                min_diff = C_values[j];
                ind_min = j;
            }
        }

        command_memory = command[ind_min];

        delete C_values;
        delete command;
    }

    sprintf(str, "%f", command_memory);
    Ret=LS.WriteString("$");
    Ret=LS.WriteString(str);
    Ret=LS.WriteString("%");

    LS.Close();
}





void spi_config_asserv(){}
void pwm_config_asserv(){}


/////////////////////////////manual definition/////////////////////////////////
void uart_config_manual(){ //gestion manuelle de la postion de la lentille
    serialib LS;                                                            // Object of the serialib class
    int Ret;                                                                // Used for return values

    Ret=LS.Open(DEVICE_PORT,9600);                                        // Open serial link at 115200 bauds
    if (Ret!=1) {                                                           // If an error occured...
        printf ("Error while opening port. Permission problem ?\n");        // ... display a message ...
        //return Ret;                                                         // ... quit the application
    }
    qDebug("Serial port opened successfully !\n");
    // Read a string from the serial device
    //Ret=LS.ReadString(Buffer,'\n',128,1000);
    char data_manual[5];
    sprintf(data_manual, "%f", manual_value);

    Ret=LS.WriteString("$");
    Ret=LS.WriteString(data_manual);
    Ret=LS.WriteString("%");

    LS.Close();

}


void spi_config_manual(){}
void pwm_config_manual(){}

void nothing(){}


void Asserv_thread::run()
{
    if(manual_state==1){
        switch(asserv_index){
        case 0 :
            qDebug("uart_config");
            uart_config_manual();
            break;
        case 1 :
            spi_config_manual();
            break;
        case 2 :
            pwm_config_manual();
            break;
        case 3 :
            nothing();
            break;
    }
    }
    else {
        switch(asserv_index){
        case 0 :
            qDebug("uart_config");
            uart_config_asserv();
            break;
        case 1 :
            spi_config_asserv();
            break;
        case 2 :
            pwm_config_asserv();
            break;
        case 3 :
            nothing();
            break;
        }
    }
}



