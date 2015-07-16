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


class Uiasserv : public QDialog
{
    Q_OBJECT
public:
    explicit Uiasserv(QWidget *parent = 0);
    ~Uiasserv(){}

signals:

public slots:
    void changeValue(void); //update des values au changement de valeurs dans les boxes
    void changeProcessing(void);
private:

    QSpinBox *SpinBox_thresh;
    QComboBox *ComboBox_signals;
    QGroupBox *spinBoxesGroup;
    QGroupBox *doubleSpinBoxesGroup;



};
#endif // UIASSERV_H

