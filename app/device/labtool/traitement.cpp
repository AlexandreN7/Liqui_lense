
#include "traitement.h"

QVector<double>*  traitement(QVector<double>* s)
{
    QVector<double>* buffer = NULL;

    unsigned int taille = s->size();


    buffer = s;

    double *data = s->data();

    double *data_mod;
    data_mod = new double[taille];

    double *data_buff = buffer->data();


    double max_A = 0;
    double min_A = 0;

    double Gain = 0;


    double *diffDataMod;
    diffDataMod = new double[taille];

    double *vectDiffDataMod;
    vectDiffDataMod = new double[taille];

    double *frange;
    frange = new double[taille];

    double *reconstitution;
    reconstitution = new double[taille];

    double *signal;
    signal = new double[taille];



    // //////////////////////////////////////////////////// //
    // Detection du min et du max du signal pour normaliser //
    // //////////////////////////////////////////////////// //

    for (unsigned int i=1; i<taille-2; i++)
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

    Gain = 1/(max_A-min_A);

    for (unsigned int i=1; i<taille-2; i++)
    {

        if(i>30)
        {
            for(int k = 0; k<30; k++)
            {
            data_mod[i] = Gain*data[i] + 0.0333 * Gain * data[k];
            }
        }

        else
            data_mod[i] = Gain * data[i];

    }

    // //////////////////////////////////////////////////// //
    // //////////////////////////////////////////////////// //



    unsigned int dt = 20;
    double gainDiff = 2;

    for (unsigned int i=1+dt; i<taille-(dt+1); i++)
    {
        diffDataMod[i] = data[i+dt]-data[i];


        if(diffDataMod[i]>diffDataMod[i-dt] && diffDataMod[i]>diffDataMod[i+dt])
        {
            vectDiffDataMod[i] = gainDiff*diffDataMod[i];
        }

        else if(diffDataMod[i]<diffDataMod[i-dt] && diffDataMod[i]<diffDataMod[i+dt])
        {
            vectDiffDataMod[i] = gainDiff*diffDataMod[i];
        }

        else
        {
            vectDiffDataMod[i] = 0;
        }
    }


    double seuil = 1;
    int flag_down = 0;
    int flag_up = 0;


    for (unsigned int i=1; i<taille-2; i++)
    {
        if(vectDiffDataMod[i]<(-1)*seuil && flag_up == 0)
        {
            frange[i] = 1;
            flag_up = 1;
        }

        else if(vectDiffDataMod[i]>seuil && flag_down == 0)
        {
            frange[i] = -1;
            flag_down = 1;
        }

        else
        {

            if(vectDiffDataMod[i]>=(-1)*seuil && flag_up == 1)
                flag_up = 0;

            if(vectDiffDataMod[i]<=seuil && flag_down == 1)
                flag_down = 0;

            frange[i]=0;
        }




         //data_buff[i] = frange[i];
     }

    double moy = 0;


    for (unsigned int i=1; i<taille-2; i++)
    {
        if(frange[i] == 1)
        {
            reconstitution[i]=reconstitution[i-1]+0.5;
        }

        else if(frange[i] == -1)
        {
            reconstitution[i]=reconstitution[i-1]-0.5;
        }

        else
            reconstitution[i]=reconstitution[i-1];

        signal[i] = reconstitution[i] + data_mod[i];

        moy = moy + signal[i];

    }


    for (unsigned int i=1; i<taille-2; i++)
    {
        data_buff[i] = signal[i] - moy/(taille-2);
    }


    return buffer;

}



