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
#ifndef UICAPTUREAREA_H
#define UICAPTUREAREA_H

#include <QWidget>
#include "uiplot.h"
#include "uianaloggroup.h"
#include "uiselfmixedgroup.h"


class UiCaptureArea : public QWidget
{
    Q_OBJECT
public:
    explicit UiCaptureArea(SignalManager* signalManager, QWidget *parent = 0);
    void handleSignalDataChanged();
    void updateUi();
    void updateAnalogGroup();
    void updateSelfmixedGroup();
signals:
    
public slots:
    void zoomIn();
    void zoomOut();
    void zoomAll();

private:
    SignalManager* mSignalManager;
    UiPlot* mPlot;
    UiAnalogGroup* mAnalogGroup;
    UiSelfmixedGroup* mSelfmixedGroup;
    
};

#endif // UICAPTUREAREA_H
