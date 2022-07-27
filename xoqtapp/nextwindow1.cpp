#include "nextwindow1.h"
#include "ui_nextwindow1.h"
#include <string>
#include <iostream>
#include <QFileDialog>
#include <qthread.h>
#include <QMessageBox>
#include<QListWidgetItem>
#include <QString>
//#include<QSqlDatabase>
//#include <QtSql>

NextWindow1::NextWindow1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NextWindow1)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white;color:black;border:none;");
    ui->sampleCaptureBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
}

NextWindow1::~NextWindow1()
{
    delete ui;
}







void NextWindow1::on_sampleCaptureBtn_clicked()
{
    sampleCaptureScreen = new SampleCaptureScreen(this);
    sampleCaptureScreen->show();
}


void NextWindow1::on_menuBtn_clicked()
{
    menuScreenload=new MenuScreen(this);
    menuScreenload->show();
}


void NextWindow1::on_lablePasterBtn_clicked()
{
    labelPlasterCalibrationScreen=new LablePasterCalibrationScreen(this);
    labelPlasterCalibrationScreen->show();
}


void NextWindow1::on_encoderBtn_clicked()
{
   encoderCAlibrationScreen=new EncoderCalibrationScreen(this);
   encoderCAlibrationScreen->show();
}


void NextWindow1::on_cameraBtn_clicked()
{
  cameraLightningCalibrationScreen=new CameraCalibrationScreen(this);
  cameraLightningCalibrationScreen->show();
}

