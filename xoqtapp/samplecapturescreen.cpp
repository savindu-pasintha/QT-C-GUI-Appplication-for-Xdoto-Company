#include "samplecapturescreen.h"
#include "ui_samplecapturescreen.h"

SampleCaptureScreen::SampleCaptureScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SampleCaptureScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->scssaveBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;");
    ui->scsbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");
    ui->scscaptureBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
    ui->scscanPLainText->setStyleSheet("background-color: white;color:black;border:1px solid green;width:100px;height:50px;");
    ui->scscaptureLengthPlainText->setStyleSheet("background-color: white;color:black;border:1px solid green;width:100px;height:50px;");

}

SampleCaptureScreen::~SampleCaptureScreen()
{
    delete ui;
}

void SampleCaptureScreen::on_scscaptureBtn_clicked()
{

}


void SampleCaptureScreen::on_scssaveBtn_clicked()
{

}


void SampleCaptureScreen::on_scsbackBtn_clicked()
{

}

