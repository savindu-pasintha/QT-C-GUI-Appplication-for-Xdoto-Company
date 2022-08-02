#ifndef ENROLEMENTSCREEN_H
#define ENROLEMENTSCREEN_H

#include <QDialog>
#include<QStringListModel>
#include<enrollconfirmscreen.h>

//Load existing files
#include<existingfileloadingtest.h>
#include<./deployed-on-server/grabconsole/ProcessTest.h>


//Load screen
//#include <mainwindow.h>
#include<menuscreen.h>
#include<enrollnewqualityscreen.h>

namespace Ui {
class EnrolementScreen;
}

class EnrolementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit EnrolementScreen(QWidget *parent = nullptr);
    ~EnrolementScreen();

private slots:
    void on_enrsmenuBtn_clicked();

    void on_enrsenrollNew_clicked();

    void on_enrsstartBtn_clicked();

private:
    Ui::EnrolementScreen *ui;
    QStringListModel *model;
    //load screen
    //MainWindow *mainWindowScreen;
    MenuScreen *menuScreen;
    EnrollNewQualityScreen  *enrollNewQualityScreen;
    EnrollConfirmScreen *enrollConfirmScreen;
    ExistingFileLoadingTest *existingFileLoadingTest;
    ProcessTest *processTest;

};

#endif // ENROLEMENTSCREEN_H
