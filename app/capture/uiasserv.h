#ifndef UIASSERV_H
#define UIASSERV_H

#include <QWidget>
#include <QDialog>
#include <QList>
#include <QComboBox>
#include <QCheckBox>
#include <QMap>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QGroupBox>
#include <QSlider>
#include <QPushButton>

class Uiasserv : public QDialog
{
    Q_OBJECT
public:
    explicit Uiasserv(QWidget *parent = 0);
    ~Uiasserv(){}

signals:
    void sliderReleased(void);
    //void click(void);

public slots:
    void changeValue(void); //update des values au changement de valeurs dans les boxes
    void changeProcessing(void);
    void changeSliderValue(void);
    void buttonchecked(void);
private:

    QSpinBox  *SpinBox_dicho;
    QSpinBox  *SpinBox_order;
    QComboBox *ComboBox_signals;
    QGroupBox *spinBoxesGroup;
    QGroupBox *doubleSpinBoxesGroup;
    QSlider *data_slider;
    QDoubleSpinBox *Spinboxdata_slider;
    QCheckBox *manualButton;

};
#endif // UIASSERV_H

