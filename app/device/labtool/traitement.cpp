#include "traitement.h"

#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <math.h>

#define PI 3.14159265

using namespace std;

void traitement(QVector<double>* s,QVector<double>* buffer)
{

    unsigned int taille = s->size();
    double *data = s->data();
    double *data_buff = buffer->data();


    for(int i = 0; i<taille-2; i++) {
        data_buff[i]=data[i];
    }


    double max_A = 0;
    double min_A = 0;

    double Gain = 0;


    double *dataNorm;
    dataNorm = new double[taille];

    double *dataNormAcos;
    dataNormAcos = new double[taille];

    double *diffDataNormAcos;
    diffDataNormAcos = new double[taille];

    double *frange;
    frange = new double[taille];






    double *reconstitution;
    reconstitution = new double[taille];




    double *signalTest;
    signalTest = new double[taille];





    double *signalReconstruitGood;
    signalReconstruitGood = new double[taille];




    // //////////////////////////////////////////////////// //
    // Detection du min et du max du signal pour normaliser //
    // //////////////////////////////////////////////////// //

    min_A = data[0];
    max_A = data[0];

    for (unsigned int i=1; i<taille; i++)
    {
        if(data[i] > data[i-1])
        {
            if(max_A < data[i])
            {
                max_A = data[i];
            }
        }

        else if(data[i] < data[i-1])
        {
            if(min_A > data[i])
            {
                min_A = data[i];
            }
        }
    }

    Gain = 1/(max_A-min_A); // Amplitude entre -1 et 1

    for (unsigned int i=0; i<taille; i++)
    {
        dataNorm[i] = Gain * data[i] + 0.5;
    }

    // //////////////////////////////////////////////////// //
    // //////////////////////////////////////////////////// //




    // //////////////////////////////////////////////////// //
    // //// Arccosinus --> estimation de la phase [pi] //// //
    // //////////////////////////////////////////////////// //

    diffDataNormAcos[0] = 0;
    data_buff[0] = data_buff[1];


    for (unsigned int i=1; i<taille; i++)
    {
        dataNormAcos[i] = acos(dataNorm[i]);


        diffDataNormAcos[i] = 10 * (dataNormAcos[i] - dataNormAcos[i-1]);    // Gain nécessaire à la detection de pics
    }

    // //////////////////////////////////////////////////// //
    // //////////////////////////////////////////////////// //


    extern double alpha_value;
    extern double lambda_value;
    extern double thresh_value;
    extern int process_index;


    int flag_down = 0;
    int flag_up = 0;


    double min1 = 1;
    double min2 = 1;

    for (unsigned int i=1; i<taille-2; i++)
    {
        if(diffDataNormAcos[i]<0)
            signalTest[i] = (-1)*diffDataNormAcos[i]*diffDataNormAcos[i];
        else
            signalTest[i] = diffDataNormAcos[i]*diffDataNormAcos[i];

        if(signalTest[i]<(-1)*thresh_value)
        {
            if(min2>dataNorm[i] && i > 5000 && i < taille-5000)
                min2=dataNorm[i];

            if(flag_up == 0)
            {
            frange[i] = 1;
            flag_up = 1;
            }
        }

        else if(signalTest[i]>thresh_value)
        {
            if(min1>dataNorm[i] && i > 5000 && i < taille-5000)
                min1=dataNorm[i];

            if(flag_down == 0)
            {
            frange[i] = -1;
            flag_down = 1;
            }
        }

        else
        {
            if(signalTest[i]>=(-1)*thresh_value && flag_up == 1)
                flag_up = 0;

            if(signalTest[i]<=thresh_value && flag_down == 1)
                flag_down = 0;

            frange[i]=0;
        }
     }


    reconstitution[0] = 0;

    double moy = 0;


    for (unsigned int i=1; i<taille-2; i++)
    {
        if(frange[i] == 1)
        {
            reconstitution[i]=reconstitution[i-1]+2*3.1416;
        }

        else if(frange[i] == -1)
        {
            reconstitution[i]=reconstitution[i-1]-2*3.1416;
        }

        else
            reconstitution[i]=reconstitution[i-1];

        moy += reconstitution[i] / 32768;


        signalReconstruitGood[i] = reconstitution[i] + 2*3.1416*dataNormAcos[i];
    }

    extern double C_value;

    C_value = floorf((4.5 * (min1-min2) + 1.1) * 100) / 100;


    switch (process_index)
    {
        case 0:
        {
             for (unsigned int i=1; i<taille-2; i++)
             {
                 data_buff[i] = 0.2 * (signalReconstruitGood[i]-moy) - 2;
             }

             break;
        }

        case 1:
        {
            for (unsigned int i=1; i<taille-2; i++)
            {
                data_buff[i] = frange[i];
            }

            break;
        }

        case 2:
        {
            for (unsigned int i=1; i<taille-2; i++)
            {
                data_buff[i] = dataNorm[i];
            }

        break;
        }

    }

    delete  dataNorm;
    delete  dataNormAcos;
    delete  diffDataNormAcos;
    delete  frange;
    delete  reconstitution;
    delete  signalTest;
    delete  signalReconstruitGood;

    //return buffer;

}
