#include "lablepastercalibrationscreen.h"
#include "ui_lablepastercalibrationscreen.h"

LablePasterCalibrationScreen::LablePasterCalibrationScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LablePasterCalibrationScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->lblpcstartBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->lblpcbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");

}

LablePasterCalibrationScreen::~LablePasterCalibrationScreen()
{
    delete ui;
}

void LablePasterCalibrationScreen::on_lblpcstartBtn_clicked()
{

}


void LablePasterCalibrationScreen::on_lblpcbackBtn_clicked()
{

}

