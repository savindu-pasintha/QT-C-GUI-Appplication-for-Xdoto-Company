#include "cameracalibrationscreen.h"
#include "ui_cameracalibrationscreen.h"

CameraCalibrationScreen::CameraCalibrationScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraCalibrationScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->ccsrecalibrateBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
    ui->ccsbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");
    ui->ccssaveBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;");

}

CameraCalibrationScreen::~CameraCalibrationScreen()
{
    delete ui;
}
