#include "qlablemouseevent.h"
#include<QLabel>

QLableMouseEvent::QLableMouseEvent(QWidget *parent) : QLabel(parent){}

void QLableMouseEvent::mouseMoveEvent(QMouseEvent *ev){
    this->x=ev->x();
    this->y=ev->y();
    emit Mouse_Pos();
}

void QLableMouseEvent::mousePressEvent(QMouseEvent *ev){
    emit Mouse_Pressed();
}
void QLableMouseEvent::leaveEvent(QEvent *){
    emit Mouse_Left();
}
