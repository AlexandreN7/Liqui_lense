#include <QDebug>
#include "asserv.h"
#include "serialib.h"

using namespace std;

#define DEVICE_PORT "/dev/ttyUSB0"                         // ttyUSB0 for linux

Asserv_thread::Asserv_thread()
{
    qDebug("Constructeur du Thread");

}
//external dependencies
extern double C_value;
extern bool stp;
extern int asserv_index;
extern int dicho_value;
extern int order_value;
extern int manual_state;
extern float manual_value;



///////////////////////////////////asserv definition/////////////////////////////////:
void uart_config_asserv(){
    serialib LS;                                                            // Object of the serialib class
    int Ret;                                                                // Used for return values
    char Buffer[128];

    // Open serial port

    Ret=LS.Open(DEVICE_PORT,9600);                                        // Open serial link at 115200 bauds
    if (Ret!=1) {                                                           // If an error occured...
        printf ("Error while opening port. Permission problem ?\n");        // ... display a message ...
        //return Ret;                                                         // ... quit the application
    }
    printf ("Serial port opened successfully !\n");                              // Read a maximum of 128 characters with a timeout of 5 seconds                                                                        // The final character of the string must be a line feed ('\n'
    Ret=LS.WriteString("Yolo\n");

    // Close the connection with the device

    LS.Close();

    //return 0;

}
void spi_config_asserv(){}
void pwm_config_asserv(){}


/////////////////////////////manual definition/////////////////////////////////
void uart_config_manual(){ //gestion manuelle de la postion de la lentille
    serialib LS;                                                            // Object of the serialib class
    int Ret;                                                                // Used for return values
    //char Buffer[128];

    // Open serial port

    Ret=LS.Open(DEVICE_PORT,9600);                                        // Open serial link at 115200 bauds
    if (Ret!=1) {                                                           // If an error occured...
        printf ("Error while opening port. Permission problem ?\n");        // ... display a message ...
        //return Ret;                                                         // ... quit the application
    }
    printf ("Serial port opened successfully !\n");
    // Read a string from the serial device
    //Ret=LS.ReadString(Buffer,'\n',128,1000);
    char data_manual[10];
    sprintf(data_manual, "%f", manual_value);

    Ret=LS.WriteString(data_manual);

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



