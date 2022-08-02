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

private slots:
    void on_ccsbackBtn_clicked();

    void on_ccssaveBtn_clicked();

    void on_ccsrecalibrateBtn_clicked();

private:
    Ui::CameraCalibrationScreen *ui;
};

#endif // CAMERACALIBRATIONSCREEN_H
