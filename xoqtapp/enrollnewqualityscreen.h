#ifndef ENROLLNEWQUALITYSCREEN_H
#define ENROLLNEWQUALITYSCREEN_H

#include <QDialog>
#include<QStringListModel>
#include<editsegmentscreen.h>

namespace Ui {
class EnrollNewQualityScreen;
}

class EnrollNewQualityScreen : public QDialog
{
    Q_OBJECT

public:
    explicit EnrollNewQualityScreen(QWidget *parent = nullptr);
    ~EnrollNewQualityScreen();

private slots:
    void on_enrnqsenrollnewBtn_clicked();

    void on_enrnqssavenewqualityBtn_clicked();

    void on_enrnqsbackBtn_clicked();

private:
    Ui::EnrollNewQualityScreen *ui;
    //define variables
    QStringListModel *modelList;
    EditSegmentScreen *editsegmentScreen;
};

#endif // ENROLLNEWQUALITYSCREEN_H
