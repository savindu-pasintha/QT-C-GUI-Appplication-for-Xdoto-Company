#ifndef NEXTWINDOW1_H
#define NEXTWINDOW1_H

#include <QDialog>

namespace Ui {
class NextWindow1;
}

class NextWindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit NextWindow1(QWidget *parent = nullptr);
    ~NextWindow1();

private slots:


    void on_ckBtn_clicked();

private:
    Ui::NextWindow1 *ui;
};

#endif // NEXTWINDOW1_H
