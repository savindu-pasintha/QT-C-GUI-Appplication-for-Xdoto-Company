#ifndef NEXTWINDOW1_H
#define NEXTWINDOW1_H

#include <QDialog>
//load other screens header files
#include<samplecapturescreen.h>
#include<menuscreen.h>
#include<lablepastercalibrationscreen.h>
#include<encodercalibrationscreen.h>
#include<cameracalibrationscreen.h>

namespace Ui {
class NextWindow1;
}

class NextWindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit NextWindow1(QWidget *parent = nullptr);
    ~NextWindow1();

private slots:

    void on_sampleCaptureBtn_clicked();

    void on_menuBtn_clicked();

    void on_lablePasterBtn_clicked();

    void on_encoderBtn_clicked();

    void on_cameraBtn_clicked();

private:
    Ui::NextWindow1 *ui;
    ///load screen to assign pointer variable
    SampleCaptureScreen *sampleCaptureScreen;
    MenuScreen *menuScreenload;
    LablePasterCalibrationScreen *labelPlasterCalibrationScreen;
    EncoderCalibrationScreen *encoderCAlibrationScreen;
    CameraCalibrationScreen *cameraLightningCalibrationScreen;
};

#endif // NEXTWINDOW1_H
