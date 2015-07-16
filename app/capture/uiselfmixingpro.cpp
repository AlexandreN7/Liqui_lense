
/*
 *  Copyright 2013 Embedded Artists AB
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#include "uiselfmixingpro.h"

#include <QDebug>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QDialogButtonBox>
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

//variable globale car on a pas envi de se faire chier
double alpha_value=4;
double lambda_value=0;
double thresh_value=2.25;
int process_index=0;

Uiselfmixingpro::Uiselfmixingpro(QWidget *parent) :
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

    //doubleSpinBoxesGroup = new QGroupBox(tr("Double precision spinboxes"));

    QLabel *Label_alpha = new QLabel(tr("Alpha value"));
    DoubleSpinBox_alpha = new QDoubleSpinBox;
    DoubleSpinBox_alpha->setRange(-1000, 1000);
    DoubleSpinBox_alpha->setDecimals(2);
    DoubleSpinBox_alpha->setValue(alpha_value);
    //DoubleSpinBox_lambda->setSingleStep(1); //1 par défaut


    QLabel *Label_lambda = new QLabel(tr("Lambda value"));
    DoubleSpinBox_lambda= new QDoubleSpinBox;
    DoubleSpinBox_lambda->setRange(-1000, 1000);
    DoubleSpinBox_lambda->setDecimals(10);
    DoubleSpinBox_lambda->setValue(lambda_value);
    DoubleSpinBox_lambda->setSingleStep(0.1);
    DoubleSpinBox_lambda->setSuffix("nm");


    QLabel *Label_thresh = new QLabel(tr("Threshold value"));
    DoubleSpinBox_thresh = new QDoubleSpinBox;
    DoubleSpinBox_thresh->setRange(-1000, 1000);
    DoubleSpinBox_thresh->setDecimals(5);
    DoubleSpinBox_thresh->setValue(thresh_value);
    DoubleSpinBox_thresh->setSingleStep(0.25);


    QLabel *Label_ComboBox_signals = new QLabel(tr("Choix du type de traitement à effectuer"));
    ComboBox_signals= new QComboBox;
    ComboBox_signals->setObjectName("Choix de traitement");
    ComboBox_signals->addItem("Traitement 1");
    ComboBox_signals->addItem("Traitement 2");
    ComboBox_signals->addItem("Traitement 3");
    ComboBox_signals->setCurrentIndex(process_index);

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

    connect(DoubleSpinBox_alpha, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));

    connect(DoubleSpinBox_lambda, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));

    connect(DoubleSpinBox_thresh, SIGNAL(valueChanged(double)),
            this, SLOT(changeValue(void)));

    connect(ComboBox_signals, SIGNAL(currentIndexChanged(int)), this,
            SLOT(changeProcessing(void)));

    verticalLayout->addWidget(Label_alpha);
    verticalLayout->addWidget(DoubleSpinBox_alpha);
    verticalLayout->addWidget(Label_lambda);
    verticalLayout->addWidget(DoubleSpinBox_lambda);
    verticalLayout->addWidget(Label_thresh);
    verticalLayout->addWidget(DoubleSpinBox_thresh);
    verticalLayout->addWidget(Label_ComboBox_signals);
    verticalLayout->addWidget(ComboBox_signals);


    verticalLayout->addLayout(formLayout);
    verticalLayout->addWidget(bottonBox);


    setLayout(verticalLayout);
}



void Uiselfmixingpro::changeValue(void)
{
    alpha_value =DoubleSpinBox_alpha->value();
    lambda_value =DoubleSpinBox_lambda->value();
    thresh_value =DoubleSpinBox_thresh->value();
}

void Uiselfmixingpro::changeProcessing(void)
{
    process_index=ComboBox_signals->currentIndex();
}
