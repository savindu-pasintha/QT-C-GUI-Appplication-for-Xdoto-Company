#ifndef EDITSEGMENTSCREEN_H
#define EDITSEGMENTSCREEN_H

#include <QDialog>

namespace Ui {
class EditSegmentScreen;
}

class EditSegmentScreen : public QDialog
{
    Q_OBJECT

public:
    explicit EditSegmentScreen(QWidget *parent = nullptr);
    ~EditSegmentScreen();

private slots:
    void on_editSegmentRescanBtn_clicked();

    void on_editSegmentEnrollBtn_clicked();

    void on_editSegmentAddLineBtn_clicked();

    void on_editSegmentRemoveLine_clicked();

    ///mouse events
    void mouse_current_pos();
    void mouse_pressed();
    void mouse_left();

private:
    Ui::EditSegmentScreen *ui;
};

#endif // EDITSEGMENTSCREEN_H
