#ifndef DEFECTDETECTIONDIALOGSCREEN_H
#define DEFECTDETECTIONDIALOGSCREEN_H

#include <QDialog>
//Load other screens header files
#include <enrolementscreen.h>

namespace Ui {
class DefectDetectionDialogScreen;
}

class DefectDetectionDialogScreen : public QDialog
{
    Q_OBJECT

public:
    explicit DefectDetectionDialogScreen(QWidget *parent = nullptr);
    ~DefectDetectionDialogScreen();

private slots:

    void on_dddscomfirmBtn_clicked();

    void on_dddsbackBtn_clicked();

    void on_dddsstartBtn_clicked();

private:
    Ui::DefectDetectionDialogScreen *ui;
    //Laad screen
    EnrolementScreen *enrolementScreen;
};

#endif // DEFECTDETECTIONDIALOGSCREEN_H
