#ifndef CAMERACALIBRATIONSCREEN_H
#define CAMERACALIBRATIONSCREEN_H

#include <QDialog>

namespace Ui {
class CameraCalibrationScreen;
}

class CameraCalibrationScreen : public QDialog
{
    Q_OBJECT

public:
    explicit CameraCalibrationScreen(QWidget *parent = nullptr);
    ~CameraCalibrationScreen();

private:
    Ui::CameraCalibrationScreen *ui;
};

#endif // CAMERACALIBRATIONSCREEN_H
