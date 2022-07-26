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
    ui->ckBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
}

NextWindow1::~NextWindow1()
{
    delete ui;
}



void NextWindow1::on_ckBtn_clicked()
{
     std::cout << "Can not load selected image !";
}

