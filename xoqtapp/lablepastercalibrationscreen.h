#ifndef LABLEPASTERCALIBRATIONSCREEN_H
#define LABLEPASTERCALIBRATIONSCREEN_H

#include <QDialog>
//#include<menuscreen.h>

namespace Ui {
class LablePasterCalibrationScreen;
}

class LablePasterCalibrationScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LablePasterCalibrationScreen(QWidget *parent = nullptr);
    ~LablePasterCalibrationScreen();

private slots:
    void on_lblpcstartBtn_clicked();

    void on_lblpcbackBtn_clicked();

private:
    Ui::LablePasterCalibrationScreen *ui;
   // MenuScreen *backScreenAsaMenu;
};

#endif // LABLEPASTERCALIBRATIONSCREEN_H
