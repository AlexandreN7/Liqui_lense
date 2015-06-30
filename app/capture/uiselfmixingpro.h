#ifndef UISELFMIXINGPRO
#define UISELFMIXINGPRO
#include <QWidget>
#include <QDialog>
#include <QList>
#include <QComboBox>
#include <QCheckBox>
#include <QMap>
#include <QDoubleSpinBox>
#include <QGroupBox>


class Uiselfmixingpro : public QDialog
{
    Q_OBJECT
public:
    explicit Uiselfmixingpro(QWidget *parent = 0);
    ~Uiselfmixingpro(){}

signals:

public slots:
    void changeValue(void); //update des values au changement de valeurs dans les boxes
    void changeProcessing(void);
private:

    QDoubleSpinBox *DoubleSpinBox_alpha;
    QDoubleSpinBox *DoubleSpinBox_lambda;
    QDoubleSpinBox *DoubleSpinBox_thresh;
    QComboBox *ComboBox_signals;
    QGroupBox *spinBoxesGroup;
    QGroupBox *doubleSpinBoxesGroup;



};
#endif // UISELFMIXINGPRO

