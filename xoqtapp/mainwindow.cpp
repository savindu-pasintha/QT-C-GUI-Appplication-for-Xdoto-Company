#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <QFileDialog>
#include <qthread.h>
#include <QMessageBox>
#include<QListWidgetItem>
#include <QString>
//#include<QSqlDatabase>
//#include <QtSql>

using namespace std;


// ALL THE GLOBAL DEFINITIONS
QStringList fileNamesList= { "/home/savindu/Downloads/projects/photos/1.jpeg",
                        "/home/savindu/Downloads/projects/photos/2.jpg",
                        "/home/savindu/Downloads/projects/photos/3.jpg",
                        "/home/savindu/Downloads/projects/photos/4.jpg",
                        "/home/savindu/Downloads/projects/photos/5.jpg",
                        "/home/savindu/Downloads/projects/photos/6.jpeg",
                        "/home/savindu/Downloads/projects/photos/10.jpeg",
                        "/home/savindu/Downloads/projects/photos/7.jpg",
                        "/home/savindu/Downloads/projects/photos/8.jpeg",
                        "/home/savindu/Downloads/projects/photos/9.jpeg",
                        };



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: black;color:white;border:none;");

    //for looped imagesLIst
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(150,150));
    ui->listWidget->setResizeMode(QListWidget::Fixed);//Ajust
    for(int i=0;i<fileNamesList.size();i++){
        QString path =  fileNamesList.at(i).toLocal8Bit().constData();
        QListWidgetItem *item = new QListWidgetItem(QIcon(path),"");
        ui->listWidget->addItem(item);
    }
    /*(for(int i=0;i<fileNamesList.size();i++){
        QString path =  fileNamesList.at(i).toLocal8Bit().constData();
        QListWidgetItem *item = new QListWidgetItem(QIcon(path),"");
        ui->listWidget->addItem(item);
    }
    */

    //for comboBox/Dropdown values set
    ui->comboBox->addItem("Select Description",1);
    ui->comboBox->addItem("Description 2",2);
    ui->comboBox->addItem("Description 3",3);
    ui->comboBox->addItem("Description 4",4);

    //for buttons styles
    //ui->chooseImage->setStyleSheet("background-color: black;color:white;border:1px solid white;border-radius:25px;width:100px;height:50px;");
    ui->stopBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");
    ui->startBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
    ui->saveBtn->setStyleSheet("background-color: yellow;color:black;border:1px solid yellow;width:100px;height:50px;");
    ui->backBtn->setStyleSheet("background-color: red;color:white;border:1px solid red;width:100px;height:50px;");
    ui->generateReportBtn->setStyleSheet("background-color: green;color:white;border:1px solid green;width:100px;height:50px;");
    ui->comboBox->setStyleSheet("background-color: black;color:white;border:1px solid white;");
    ui->imageLable->setStyleSheet("background-color: black;color:white;border:1px solid white;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

QImage loadImage(QString imageFilePath){
    QImage image;
    if(QString::compare(imageFilePath,QString())!=0){
         return image;
    }

}


/*void MainWindow::on_chooseImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,tr("Choose"),tr("Images (*.png *.jpg *.jpeg *.bmp *.gif *.webp)"));
        if(QString::compare(fileName,QString())!=0){
            QImage image;
            bool isValidImage = image.load(fileName);
            if(isValidImage){
                image=image.scaledToWidth(ui->imageLable->width(),Qt::SmoothTransformation);
                ui->imageLable->setPixmap(QPixmap::fromImage(image));
            }else{
                cout << "Can not load selected image !" << endl;
            }
        }



}
*/


void MainWindow::on_startBtn_clicked()
{
    QString fileName="/home/savindu/Downloads/projects/photos/3.jpg";
    if(QString::compare(fileName,QString())!=0){
        QImage image;
        bool isValidImage = image.load(fileName);
        if(isValidImage){
            image=image.scaledToWidth(ui->imageLable->width(),Qt::SmoothTransformation);
            ui->imageLable->setPixmap(QPixmap::fromImage(image));
        }else{
            cout << "Can not load selected image !" << endl;
        }
    }
}


void MainWindow::on_stopBtn_clicked()
{
    QString fileName="/home/savindu/Downloads/projects/photos/9.jpeg";
    if(QString::compare(fileName,QString())!=0){
        QImage image;
        bool isValidImage = image.load(fileName);
        if(isValidImage){
            image=image.scaledToWidth(ui->imageLable->width(),Qt::SmoothTransformation);
            ui->imageLable->setPixmap(QPixmap::fromImage(image));
        }else{
            QMessageBox::critical(this,"Message", "Can not load selected image !", QMessageBox::Ok);
        }
    }else{
         QMessageBox msgBox;
         msgBox.setText("Can not load selected image !");
         msgBox.exec();
    }
}




void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(arg1 != "Select Description"){
    QMessageBox msgBox;
    msgBox.setText("Selected"+arg1);
    msgBox.exec();
    }
}


void MainWindow::on_saveBtn_clicked()
{

   /* QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("qtdatabase");

    if(db.open()){

        QMessageBox::information(this,"Mysql Connection","Database Connected");

        QString insertQuery ="INSERT INTO defectTable (`id`,`defects`,`timestamp`,`colortype`,`quality`) VALUES (?,?,?,?,?)";
        QSqlQuery query;

        query.prepare(insertQuery);
        query.addBindValue(1);
        query.addBindValue("defect 1,2");
        query.addBindValue("2022/07/22-10:30:52");
        query.addBindValue("red/back/green");
        query.addBindValue("Quality was good");

        if(!query.exec()){
            QDebug()<<"Error Adding values to databse";
        }else {
            cout << "Saved Description "<< endl;
            QMessageBox msgBox;
            msgBox.setText("Saved Description.");
            msgBox.exec();
            db.close();
        }

    }else{
         QMessageBox::information(this,"Mysql Connection","Database Not Connected");
          db.close();
    }

*/
    QMessageBox msgBox;
    msgBox.setText("Saved Description.");
    msgBox.exec();

}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    cout << "List Widget Item Clicked Row"<< endl;
    cout << currentRow<< endl;


    QString fileName=fileNamesList.at(currentRow).toLocal8Bit().constData();
          if(QString::compare(fileName,QString())!=0){
              QImage image;
              bool isValidImage = image.load(fileName);
              if(isValidImage){
                  image=image.scaledToWidth(ui->imageLable->width(),Qt::SmoothTransformation);
                  ui->imageLable->setPixmap(QPixmap::fromImage(image));
              }else{
                  cout << "Can not load selected image !" << endl;
              }
          }

}

//https://doc.qt.io/qt-6/qmessagebox.html

//description(defect)/quality/timestamp/colorCode/

void MainWindow::on_backBtn_clicked()
{
    //close/hide current Main Window Screen
    this->close();

    //load new screens
    defectDetectionDialogScreen=new DefectDetectionDialogScreen(this);
    defectDetectionDialogScreen->show();
}


void MainWindow::on_generateReportBtn_clicked()
{
    nextWindow1Load=new NextWindow1(this);
    nextWindow1Load->show();
}

