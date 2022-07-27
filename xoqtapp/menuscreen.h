#ifndef MENUSCREEN_H
#define MENUSCREEN_H

#include <QDialog>
//load other screens header files
#include<samplecapturescreen.h>
#include<lablepastercalibrationscreen.h>
#include<encodercalibrationscreen.h>
#include<cameracalibrationscreen.h>
//#include<nextwindow1.h>
namespace Ui {
class MenuScreen;
}

class MenuScreen : public QDialog
{
    Q_OBJECT

public:
    explicit MenuScreen(QWidget *parent = nullptr);
    ~MenuScreen();

private slots:
    void on_mcameraLightBtn_clicked();

    void on_mencoderCalibraitionBtn_clicked();

    void on_mlabelPasterBtn_clicked();

    void on_msetThresholdBtn_clicked();

    void on_msampleGenerationBtn_clicked();

    void on_mmodeleditBtn_clicked();

    void on_mtoolBtn_clicked();

    void on_mbackBtn_clicked();

private:
    Ui::MenuScreen *ui;
    ///load screen to assign pointer variable
    SampleCaptureScreen *sampleCaptureScreen;
    MenuScreen *menuScreen;
    //NextWindow1 *nextWindow1Screen2;
    LablePasterCalibrationScreen *labelPlasterCalibrationScreen;
    EncoderCalibrationScreen *encoderCAlibrationScreen;
    CameraCalibrationScreen *cameraLightningCalibrationScreen;
};

#endif // MENUSCREEN_H
