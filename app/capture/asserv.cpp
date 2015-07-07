#include <QDebug>
#include "asserv.h"

Asserv_thread::Asserv_thread()
{
    qDebug("Constructeur du Thread");

}

extern double C_value;
extern bool stp;

void Asserv_thread::run(){
    while(stp==0){
    qDebug()<<C_value;
    this->msleep(50);
    }


}
