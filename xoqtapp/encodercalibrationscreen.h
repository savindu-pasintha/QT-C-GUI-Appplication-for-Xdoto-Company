#ifndef ENCODERCALIBRATIONSCREEN_H
#define ENCODERCALIBRATIONSCREEN_H

#include <QDialog>

namespace Ui {
class EncoderCalibrationScreen;
}

class EncoderCalibrationScreen : public QDialog
{
    Q_OBJECT

public:
    explicit EncoderCalibrationScreen(QWidget *parent = nullptr);
    ~EncoderCalibrationScreen();

private slots:
    void on_encsbackBtn_clicked();

private:
    Ui::EncoderCalibrationScreen *ui;
};

#endif // ENCODERCALIBRATIONSCREEN_H
