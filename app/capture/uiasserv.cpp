#include "uiasserv.h"

#include <QDebug>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QSpinBox>
#include <QDoubleSpinBox>

#include <QButtonGroup>
#include <QCheckBox>
#include <QInputDialog>

#include "signalmanager.h"
#include "uidigitalsignal.h"
#include "uianalogsignal.h"
#include "uiselfmixedsignal.h"
#include "common/configuration.h"
#include "device/devicemanager.h"
#include "analyzer/analyzermanager.h"
#include "asserv.h"

//variable globale car on a pas envi de se faire chier

int asserv_index=0;
int dicho_value = 5;
int order_value = 3;
float manual_value = 0;
int manual_state = 0; // if manual_state = 1 -> mode manuel
extern int stp;

Uiasserv::Uiasserv(QWidget *parent) :
    QDialog(parent)
{

    setWindowTitle(tr("Selfmixed properties"));
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    // Deallocation:
    //   formLayout will be re-parented when calling verticalLayout->addLayout
    //   which means that it will be deleted when UiSimulatorConfigDialog is
    //   deleted.
    QFormLayout* formLayout = new QFormLayout;
    formLayout->setRowWrapPolicy(QFormLayout::WrapAllRows);

    //CaptureDevice* device = DeviceManager::instance().activeDevice()
    //        ->captureDevice();




    QLabel *Label_ComboBox_signals = new QLabel(tr("Choix du type de commande"));
    ComboBox_signals= new QComboBox;
    ComboBox_signals->setObjectName("Choix de traitement");
    ComboBox_signals->addItem("UART");
    ComboBox_signals->addItem("SPI");
    ComboBox_signals->addItem("PWM");
    ComboBox_signals->addItem("No command");
    ComboBox_signals->setCurrentIndex(asserv_index);

    QLabel *Label_button = new QLabel(tr("Asservissement ou pilotage manuel ?"));
    manualButton = new QCheckBox("Manual");
    if (manual_state==1) {
        manualButton->setCheckState(Qt::Checked );
    }
    else {
        //manualButton->setCheckState(Qt::CheckState );
    }

    QLabel *Label_dicho = new QLabel(tr("Nombre de subdivisions pour la dichotomie"));
    SpinBox_dicho = new QSpinBox;
    SpinBox_dicho->setRange(0, 1000);
    SpinBox_dicho->setValue(dicho_value);
    SpinBox_dicho->setSingleStep(1);

    QLabel *Label_order = new QLabel(tr("Ordre de la dichotomie"));
    SpinBox_order= new QSpinBox;
    SpinBox_order->setRange(0, 1000);
    SpinBox_order->setValue(order_value);
    SpinBox_order->setSingleStep(1);


    QLabel *Label_manual = new QLabel(tr("Contrôle manuel de la lentille"));
    data_slider = new QSlider(Qt::Horizontal);
    data_slider->setRange(0,100);
    data_slider->setValue(manual_value);

    Spinboxdata_slider = new QDoubleSpinBox;
    Spinboxdata_slider->setRange(0, 100);
    Spinboxdata_slider->setDecimals(5);
    Spinboxdata_slider->setValue(manual_value);
    Spinboxdata_slider->setSingleStep(0.25);


    //gestion du chaos
    if(manual_state==1) {
        data_slider->setEnabled(true);
        Spinboxdata_slider->setEnabled(true);
    }
    else {
        data_slider->setEnabled(false);
        Spinboxdata_slider->setEnabled(false);
    }

    //gestion ok / cancel
    QVBoxLayout* verticalLayout = new QVBoxLayout();

    // Deallocation: "Qt Object trees" (See UiMainWindow)
    QDialogButtonBox* bottonBox = new QDialogButtonBox(
                QDialogButtonBox::Ok|QDialogButtonBox::Cancel,
                Qt::Horizontal,
                this);
    bottonBox->setCenterButtons(true);

    connect(bottonBox, SIGNAL(accepted()), this, SLOT(accept()));
    connect(bottonBox, SIGNAL(rejected()), this, SLOT(reject()));

    connect(ComboBox_signals, SIGNAL(currentIndexChanged(int)), this,
            SLOT(changeProcessing(void)));

    connect(SpinBox_dicho, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));

    connect(SpinBox_order, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));

    connect(Spinboxdata_slider, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));

    connect(data_slider, SIGNAL(sliderReleased()),
            this, SLOT(changeSliderValue(void)));
    connect(manualButton, SIGNAL(pressed()),
            this, SLOT(buttonPressed(void)));

    connect(manualButton, SIGNAL(pressed()),
            this, SLOT(buttonchecked(void)));


    //implementation
    verticalLayout->addWidget(Label_ComboBox_signals);
    verticalLayout->addWidget(ComboBox_signals);
    verticalLayout->addWidget(Label_button);
    verticalLayout->addWidget(manualButton);

    verticalLayout->addWidget(Label_dicho);
    verticalLayout->addWidget(SpinBox_dicho);
    verticalLayout->addWidget(Label_order);
    verticalLayout->addWidget(SpinBox_order);
    verticalLayout->addWidget(Label_manual);
    verticalLayout->addWidget(data_slider);
    verticalLayout->addWidget(Spinboxdata_slider);

    verticalLayout->addLayout(formLayout);
    verticalLayout->addWidget(bottonBox);
    setLayout(verticalLayout);
}



void Uiasserv::changeValue(void)
{
    dicho_value = SpinBox_dicho->value();
    order_value = SpinBox_order->value();
    manual_value = Spinboxdata_slider->value();
    data_slider->setValue(manual_value);

}

void Uiasserv::changeProcessing(void)
{
    asserv_index=ComboBox_signals->currentIndex();
}

void Uiasserv::changeSliderValue(void){
    manual_value=data_slider->value();
    Spinboxdata_slider->setValue(manual_value);
}

void Uiasserv::buttonchecked(void){
    qDebug("buttonPressed");
    if (manual_state==0){
        manual_state=1;
    }
    else {
        manual_state=0;
    }
    if(manual_state==1) {
        data_slider->setEnabled(true);
        Spinboxdata_slider->setEnabled(true);
    }
    else {
        data_slider->setEnabled(false);
        Spinboxdata_slider->setEnabled(false);
    }
}
