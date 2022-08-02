#include "enrollnewqualityscreen.h"
#include "ui_enrollnewqualityscreen.h"
#include "QStringListModel"
#include <QStringList>
#include <QAbstractItemView>

EnrollNewQualityScreen::EnrollNewQualityScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnrollNewQualityScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
     ui->enrnqsenrollnewBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;border-radius:5px;");
     ui->enrnqssavenewqualityBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:5px;");
     ui->enrnqsbackBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;border-radius:5px;");

    ui->listViewForNewQuality->setStyleSheet("background-color: black;color:white;border:1px solid white;");

    //data pass to listView
    modelList = new QStringListModel(this);
    QStringList listString;
    listString<< "Parameeters : xxxxxxxxxx" << "Parameeters : xxxxxxxxxx" << "Parameeters : xxxxxxxxxx"<<"Parameeters : xxxxxxxxxx";
    modelList->setStringList(listString);
    ui->listViewForNewQuality->setModel(modelList);
}

EnrollNewQualityScreen::~EnrollNewQualityScreen()
{
    delete ui;
}

void EnrollNewQualityScreen::on_enrnqsenrollnewBtn_clicked()
{
  editsegmentScreen=new EditSegmentScreen(this);
  editsegmentScreen->show();
}


void EnrollNewQualityScreen::on_enrnqssavenewqualityBtn_clicked()
{

}


void EnrollNewQualityScreen::on_enrnqsbackBtn_clicked()
{
   this->close();
}

