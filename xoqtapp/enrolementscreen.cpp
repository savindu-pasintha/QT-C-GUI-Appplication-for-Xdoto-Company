#include "enrolementscreen.h"
#include "ui_enrolementscreen.h"
#include "QStringListModel"
#include <QStringList>
#include <QAbstractItemView>

EnrolementScreen::EnrolementScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnrolementScreen)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");
    ui->enrsstartBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;border-radius:25px;");
    ui->enrsenrollNew->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;");
    ui->enrsmenuBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");
    ui->listView->setStyleSheet("background-color: black;color:white;border:1px solid white;");

    //data pass to listView
    model = new QStringListModel(this);
    QStringList list;
    list << "Last Qality : xxxxxxxxxx" << "Length : 999.99m" << "No. Defects: 99"<<"Elspsed Time : 9:99:99:hrs";
    model->setStringList(list);
    ui->listView->setModel(model);
}

EnrolementScreen::~EnrolementScreen()
{
    delete ui;
}

void EnrolementScreen::on_enrsmenuBtn_clicked()
{
    //close this
    this->close();
    //load menu screen
    //mainWindowScreen=new MainWindow(this);
   // mainWindowScreen->show();

}


void EnrolementScreen::on_enrsenrollNew_clicked()
{

}


void EnrolementScreen::on_enrsstartBtn_clicked()
{

}

