/********************************************************************************
** Form generated from reading UI file 'nextwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTWINDOW1_H
#define UI_NEXTWINDOW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NextWindow1
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ckBtn;

    void setupUi(QDialog *NextWindow1)
    {
        if (NextWindow1->objectName().isEmpty())
            NextWindow1->setObjectName(QString::fromUtf8("NextWindow1"));
        NextWindow1->resize(1366, 768);
        verticalLayoutWidget = new QWidget(NextWindow1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 100, 341, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ckBtn = new QPushButton(verticalLayoutWidget);
        ckBtn->setObjectName(QString::fromUtf8("ckBtn"));

        verticalLayout->addWidget(ckBtn);


        retranslateUi(NextWindow1);

        QMetaObject::connectSlotsByName(NextWindow1);
    } // setupUi

    void retranslateUi(QDialog *NextWindow1)
    {
        NextWindow1->setWindowTitle(QCoreApplication::translate("NextWindow1", "Defect Detection", nullptr));
        ckBtn->setText(QCoreApplication::translate("NextWindow1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NextWindow1: public Ui_NextWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTWINDOW1_H
