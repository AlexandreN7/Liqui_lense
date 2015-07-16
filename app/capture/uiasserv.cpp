#include "uiasserv.h"

#include <QDebug>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QSpinBox>

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

//variable globale car on a pas envi de se faire chier

int asserv_index=0;
int dicho_value = 0;

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

    CaptureDevice* device = DeviceManager::instance().activeDevice()
            ->captureDevice();




    QLabel *Label_ComboBox_signals = new QLabel(tr("Choix du type de commande"));
    ComboBox_signals= new QComboBox;
    ComboBox_signals->setObjectName("Choix de traitement");
    ComboBox_signals->addItem("UART");
    ComboBox_signals->addItem("SPI");
    ComboBox_signals->addItem("PWM");

    QLabel *Label_thresh = new QLabel(tr("Threshold value"));
    SpinBox_thresh = new QSpinBox;
    SpinBox_thresh->setRange(-1000, 1000);
    //SpinBox_thresh->setDecimals(5);
    SpinBox_thresh->setValue(0);
    SpinBox_thresh->setSingleStep(1);

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

    connect(SpinBox_thresh, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));


    verticalLayout->addWidget(Label_ComboBox_signals);
    verticalLayout->addWidget(ComboBox_signals);
    verticalLayout->addWidget(Label_thresh);
    verticalLayout->addWidget(SpinBox_thresh);


    verticalLayout->addLayout(formLayout);
    verticalLayout->addWidget(bottonBox);


    setLayout(verticalLayout);
}



void Uiasserv::changeValue(void)
{
    //alpha_value =DoubleSpinBox_alpha->value();
    //lambda_value =DoubleSpinBox_lambda->value();
    //thresh_value =DoubleSpinBox_thresh->value();
}

void Uiasserv::changeProcessing(void)
{
    asserv_index=ComboBox_signals->currentIndex();
}
