#include <QDebug>
#include "asserv.h"
#include "serialib.h"

using namespace std;

#define DEVICE_PORT "/dev/ttyUSB0"                         // ttyUSB0 for linux

Asserv_thread::Asserv_thread()
{
    qDebug("Constructeur du Thread");

}

extern double C_value;
extern bool stp;

void Asserv_thread::run()
{
        serialib LS;                                                            // Object of the serialib class
        int Ret;                                                                // Used for return values
        char Buffer[128];


        // Open serial port

        Ret=LS.Open(DEVICE_PORT,9600);                                        // Open serial link at 115200 bauds
        if (Ret!=1) {                                                           // If an error occured...
            printf ("Error while opening port. Permission problem ?\n");        // ... display a message ...
            //return Ret;                                                         // ... quit the application
        }
        printf ("Serial port opened successfully !\n");



        // Read a string from the serial device
        //Ret=LS.ReadString(Buffer,'\n',128,1000);                                // Read a maximum of 128 characters with a timeout of 5 seconds

                                                                                // The final character of the string must be a line feed ('\n')

        Ret=LS.WriteString("Yolo\n");





        // Close the connection with the device

        LS.Close();

        //return 0;
}



