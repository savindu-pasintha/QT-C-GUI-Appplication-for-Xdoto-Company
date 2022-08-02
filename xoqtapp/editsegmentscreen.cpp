#include "editsegmentscreen.h"
#include "ui_editsegmentscreen.h"
#include <string>
#include <iostream>
#include <QFileDialog>
#include <qthread.h>
#include <QMessageBox>
#include<QListWidgetItem>
#include <QString>
#include <QMouseEvent>
#include<qlablemouseevent.h>

using namespace std;
EditSegmentScreen::EditSegmentScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditSegmentScreen)
{
    ui->setupUi(this);
    connect(ui->editImageLable,SIGNAL(Mouse_Pos()),this,SLOT(Mouse_current_pos()));//connect with qlablemouseevent class/header
    connect(ui->editImageLable,SIGNAL(Mouse_Pressed()),this,SLOT(Mouse_pressed()));
    connect(ui->editImageLable,SIGNAL(Mouse_Left()),this,SLOT(Mouse_left()));

    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->editSegmentEnrollBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;border-radius:5px");
    ui->editSegmentRescanBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:5px");
    ui->editSegmentAddLineBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;border-radius:5px");
    ui->editSegmentRemoveLine->setStyleSheet("background-color: red;color:black;border:1px solid red;width:100px;height:50px;border-radius:5px");
    ui->editImageLable->setStyleSheet("background-color: black;color:white;border:1px solid white;");

    QString fileName="/home/savindu/Downloads/projects/photos/3.jpg";
    /*if(QString::compare(fileName,QString())!=0){
        QImage image;
        bool isValidImage = image.load(fileName);
        if(isValidImage){
            image=image.scaledToWidth(ui->editImageLable->width(),Qt::SmoothTransformation);
            ui->editImageLable->setPixmap(QPixmap::fromImage(image));
        }else{
            cout << "Can not load selected image !" << endl;
        }
    }*/
    //LOad image to label
    ui->editImageLable->setPixmap(QPixmap(fileName));
    ui->editImageLable->setScaledContents( true );
    ui->editImageLable->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored );
}

EditSegmentScreen::~EditSegmentScreen()
{
    delete ui;
}

void EditSegmentScreen::on_editSegmentRescanBtn_clicked()
{

}


void EditSegmentScreen::on_editSegmentEnrollBtn_clicked()
{

}


void EditSegmentScreen::on_editSegmentAddLineBtn_clicked()
{

}


void EditSegmentScreen::on_editSegmentRemoveLine_clicked()
{

}

//Mouse events
void EditSegmentScreen::mouse_current_pos()
{
//cout<< QString("X = %1, Y = %2").arg(ui->editImageLable->x).arg(ui->editImageLable->y) << endl;
cout << "X"; cout<< (ui->editImageLable->x) << endl;
cout << "Y"; cout<< (ui->editImageLable->y) << endl;
}

void EditSegmentScreen::mouse_pressed()
{
  cout<<"Mouse Pressed()";
}

void EditSegmentScreen::mouse_left()
{
  cout<<"Mouse left()";
}

