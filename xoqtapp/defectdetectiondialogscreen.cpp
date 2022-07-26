#include "defectdetectiondialogscreen.h"
#include "ui_defectdetectiondialogscreen.h"

DefectDetectionDialogScreen::DefectDetectionDialogScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DefectDetectionDialogScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->dddsstartBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->dddscomfirmBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;");
    ui->dddsbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");

}

DefectDetectionDialogScreen::~DefectDetectionDialogScreen()
{
    delete ui;
}




void DefectDetectionDialogScreen::on_dddscomfirmBtn_clicked()
{

}



void DefectDetectionDialogScreen::on_dddsstartBtn_clicked()
{

}

void DefectDetectionDialogScreen::on_dddsbackBtn_clicked()
{
    //close/hide current Main Window Screen
    this->close();

    //load new screens
    enrolementScreen=new EnrolementScreen(this);
    enrolementScreen->show();

}

