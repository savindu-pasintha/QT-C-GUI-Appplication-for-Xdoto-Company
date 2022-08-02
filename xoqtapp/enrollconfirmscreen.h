#ifndef ENROLLCONFIRMSCREEN_H
#define ENROLLCONFIRMSCREEN_H

#include <QDialog>
#include<defectdetectioninprogressscreen.h>>

namespace Ui {
class EnrollConfirmScreen;
}

class EnrollConfirmScreen : public QDialog
{
    Q_OBJECT

public:
    explicit EnrollConfirmScreen(QWidget *parent = nullptr);
    ~EnrollConfirmScreen();

private slots:
    void on_ecsBackBtn_clicked();

    void on_ecsStartBtn_clicked();

    void on_confirmBtn_clicked();

private:
    Ui::EnrollConfirmScreen *ui;
    DefectDetectionInProgressScreen *defectDetectionInProgressScreen;
};

#endif // ENROLLCONFIRMSCREEN_H
