#ifndef ASSERV
#define ASSERV

#include <QApplication>
#include <QtGui>
#include <QThread>

class Asserv_thread : public QThread
{
    Q_OBJECT
    public :
        Asserv_thread();


        double C_buff;
        long delay_asserv;
        void uart_config_asserv();

    private :
                double get_C();

    public slots :
        void run();
    signals :
        //void valueChanged(int i);
        void complete();
};

#endif // ASSERV

