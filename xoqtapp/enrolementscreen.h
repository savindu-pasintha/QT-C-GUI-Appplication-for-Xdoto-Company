#ifndef ENROLEMENTSCREEN_H
#define ENROLEMENTSCREEN_H

#include <QDialog>
#include<QStringListModel>

//Load screen
//#include <mainwindow.h>

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
};

#endif // ENROLEMENTSCREEN_H
