#include "encodercalibrationscreen.h"
#include "ui_encodercalibrationscreen.h"

EncoderCalibrationScreen::EncoderCalibrationScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EncoderCalibrationScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->encsrecalibrateBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
    ui->encsbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;border-radius:5px");
    ui->encssaveBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;border-radius:5px");
    ui->encsmL1PlainText->setStyleSheet("background-color: white;color:black;border:1px solid white;width:100px;height:50px;");
    ui->encsmL2PlainText->setStyleSheet("background-color: white;color:black;border:1px solid white;width:100px;height:50px;");
    ui->encsmL3PlainText->setStyleSheet("background-color: white;color:black;border:1px solid white;width:100px;height:50px;");

}

EncoderCalibrationScreen::~EncoderCalibrationScreen()
{
    delete ui;
}

void EncoderCalibrationScreen::on_encsbackBtn_clicked()
{
    this->close();

}

