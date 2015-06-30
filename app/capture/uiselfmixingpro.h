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
private:

    QDoubleSpinBox *DoubleSpinBox_alpha;
    QDoubleSpinBox *DoubleSpinBox_lambda;
    QDoubleSpinBox *DoubleSpinBox_thresh;
    QGroupBox *spinBoxesGroup;
    QGroupBox *editsGroup;
    QGroupBox *doubleSpinBoxesGroup;



};
#endif // UISELFMIXINGPRO

