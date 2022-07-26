#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//Load other screens header files
#include <nextwindow1.h>
#include <defectdetectiondialogscreen.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void on_chooseImage_clicked();

    void on_startBtn_clicked();

    void on_stopBtn_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_saveBtn_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_backBtn_clicked();

private:
    Ui::MainWindow *ui;
    //load externl page
    NextWindow1 *nextWindow1Load;
    DefectDetectionDialogScreen *defectDetectionDialogScreen;
};
#endif // MAINWINDOW_H
