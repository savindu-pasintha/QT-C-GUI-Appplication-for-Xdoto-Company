#ifndef DEFECTDETECTIONINPROGRESSSCREEN_H
#define DEFECTDETECTIONINPROGRESSSCREEN_H

#include <QDialog>
#include <nextwindow1.h>
//#include <defectdetectiondialogscreen.h>

namespace Ui {
class DefectDetectionInProgressScreen;
}

class DefectDetectionInProgressScreen : public QDialog
{
    Q_OBJECT

public:
    explicit DefectDetectionInProgressScreen(QWidget *parent = nullptr);
    ~DefectDetectionInProgressScreen();

private slots:
    //void on_chooseImage_clicked();

    void on_startBtn_clicked();

    void on_stopBtn_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_saveBtn_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_backBtn_clicked();

    void on_generateReportBtn_clicked();

private:
    Ui::DefectDetectionInProgressScreen *ui;
    //load externl page
    NextWindow1 *nextWindow1Load;
   // DefectDetectionDialogScreen *defectDetectionDialogScreen;

};

#endif // DEFECTDETECTIONINPROGRESSSCREEN_H
