#ifndef SAMPLECAPTURESCREEN_H
#define SAMPLECAPTURESCREEN_H

#include <QDialog>

namespace Ui {
class SampleCaptureScreen;
}

class SampleCaptureScreen : public QDialog
{
    Q_OBJECT

public:
    explicit SampleCaptureScreen(QWidget *parent = nullptr);
    ~SampleCaptureScreen();

private slots:
    void on_scscaptureBtn_clicked();

    void on_scssaveBtn_clicked();

    void on_scsbackBtn_clicked();

private:
    Ui::SampleCaptureScreen *ui;
};

#endif // SAMPLECAPTURESCREEN_H
