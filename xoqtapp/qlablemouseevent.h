#ifndef QLABLEMOUSEEVENT_H
#define QLABLEMOUSEEVENT_H

#include <QLabel>
#include <QWidget>
//#include<QDebug>
#include<QEvent>
#include<QMouseEvent>

//https://www.youtube.com/watch?v=d0CDMtfefB4&t=220s

class QLableMouseEvent : public QLabel
{
    Q_OBJECT
public:
   explicit QLableMouseEvent(QWidget *parent = nullptr);
    ~QLableMouseEvent();

    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *);

    int x,y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();

 public slots:
};

#endif // QLABLEMOUSEEVENT_H
