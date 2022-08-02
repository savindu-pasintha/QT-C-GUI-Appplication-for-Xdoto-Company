#include "cameracalibrationscreen.h"
#include "ui_cameracalibrationscreen.h"

CameraCalibrationScreen::CameraCalibrationScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraCalibrationScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->ccsrecalibrateBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:5px;");
    ui->ccsbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;border-radius:5px;");
    ui->ccssaveBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;border-radius:5px;");

}

CameraCalibrationScreen::~CameraCalibrationScreen()
{
    delete ui;
}

void CameraCalibrationScreen::on_ccsbackBtn_clicked()
{
    this->close();
}


void CameraCalibrationScreen::on_ccssaveBtn_clicked()
{

}


void CameraCalibrationScreen::on_ccsrecalibrateBtn_clicked()
{

}

