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
int dicho_value = 5;
int order_value = 3;

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
    ComboBox_signals->addItem("Manual");


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

    verticalLayout->addWidget(Label_ComboBox_signals);
    verticalLayout->addWidget(ComboBox_signals);
    verticalLayout->addWidget(Label_dicho);
    verticalLayout->addWidget(SpinBox_dicho);
    verticalLayout->addWidget(Label_order);
    verticalLayout->addWidget(SpinBox_order);


    verticalLayout->addLayout(formLayout);
    verticalLayout->addWidget(bottonBox);


    setLayout(verticalLayout);
}



void Uiasserv::changeValue(void)
{
    dicho_value = SpinBox_dicho->value();
    order_value = SpinBox_order->value();
}

void Uiasserv::changeProcessing(void)
{
    asserv_index=ComboBox_signals->currentIndex();
}
