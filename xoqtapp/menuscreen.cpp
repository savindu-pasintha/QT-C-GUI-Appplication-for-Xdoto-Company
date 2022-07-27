#include "menuscreen.h"
#include "ui_menuscreen.h"

MenuScreen::MenuScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->mcameraLightBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->mencoderCalibraitionBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->mlabelPasterBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->msetThresholdBtn->setStyleSheet("background-color: orange;color:black;border:1px solid orange;width:100px;height:50px;border-radius:25px;");
    ui->msampleGenerationBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->mmodeleditBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->mtoolBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");

    ui->mbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");

}

MenuScreen::~MenuScreen()
{
    delete ui;
}

void MenuScreen::on_mcameraLightBtn_clicked()
{
    cameraLightningCalibrationScreen=new CameraCalibrationScreen(this);
    cameraLightningCalibrationScreen->show();
}


void MenuScreen::on_mencoderCalibraitionBtn_clicked()
{
    encoderCAlibrationScreen=new EncoderCalibrationScreen(this);
    encoderCAlibrationScreen->show();
}


void MenuScreen::on_mlabelPasterBtn_clicked()
{
    labelPlasterCalibrationScreen=new LablePasterCalibrationScreen(this);
    labelPlasterCalibrationScreen->show();
}


void MenuScreen::on_msetThresholdBtn_clicked()
{

}


void MenuScreen::on_msampleGenerationBtn_clicked()
{

}


void MenuScreen::on_mmodeleditBtn_clicked()
{

}


void MenuScreen::on_mtoolBtn_clicked()
{

}


void MenuScreen::on_mbackBtn_clicked()
{
    this->close();
}

