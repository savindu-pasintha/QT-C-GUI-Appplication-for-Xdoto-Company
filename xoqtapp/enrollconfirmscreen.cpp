#include "enrollconfirmscreen.h"
#include "ui_enrollconfirmscreen.h"

EnrollConfirmScreen::EnrollConfirmScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnrollConfirmScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->ecsBackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;border-radius:5px;");
    ui->confirmBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;border-radius:5px;");
    ui->ecsStartBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");

}

EnrollConfirmScreen::~EnrollConfirmScreen()
{
    delete ui;
}

void EnrollConfirmScreen::on_ecsBackBtn_clicked()
{
   this->close();
}


void EnrollConfirmScreen::on_ecsStartBtn_clicked()
{
  defectDetectionInProgressScreen=new DefectDetectionInProgressScreen(this);
  defectDetectionInProgressScreen->show();
}


void EnrollConfirmScreen::on_confirmBtn_clicked()
{

}

