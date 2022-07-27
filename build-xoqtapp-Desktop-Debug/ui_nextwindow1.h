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
    QPushButton *sampleCaptureBtn;
    QPushButton *menuBtn;
    QPushButton *lablePasterBtn;
    QPushButton *encoderBtn;
    QPushButton *cameraBtn;

    void setupUi(QDialog *NextWindow1)
    {
        if (NextWindow1->objectName().isEmpty())
            NextWindow1->setObjectName(QString::fromUtf8("NextWindow1"));
        NextWindow1->resize(1366, 768);
        verticalLayoutWidget = new QWidget(NextWindow1);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 100, 341, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sampleCaptureBtn = new QPushButton(verticalLayoutWidget);
        sampleCaptureBtn->setObjectName(QString::fromUtf8("sampleCaptureBtn"));

        verticalLayout->addWidget(sampleCaptureBtn);

        menuBtn = new QPushButton(verticalLayoutWidget);
        menuBtn->setObjectName(QString::fromUtf8("menuBtn"));

        verticalLayout->addWidget(menuBtn);

        lablePasterBtn = new QPushButton(verticalLayoutWidget);
        lablePasterBtn->setObjectName(QString::fromUtf8("lablePasterBtn"));

        verticalLayout->addWidget(lablePasterBtn);

        encoderBtn = new QPushButton(verticalLayoutWidget);
        encoderBtn->setObjectName(QString::fromUtf8("encoderBtn"));

        verticalLayout->addWidget(encoderBtn);

        cameraBtn = new QPushButton(verticalLayoutWidget);
        cameraBtn->setObjectName(QString::fromUtf8("cameraBtn"));

        verticalLayout->addWidget(cameraBtn);


        retranslateUi(NextWindow1);

        QMetaObject::connectSlotsByName(NextWindow1);
    } // setupUi

    void retranslateUi(QDialog *NextWindow1)
    {
        NextWindow1->setWindowTitle(QCoreApplication::translate("NextWindow1", "Defect Detection", nullptr));
        sampleCaptureBtn->setText(QCoreApplication::translate("NextWindow1", "sample capture screen", nullptr));
        menuBtn->setText(QCoreApplication::translate("NextWindow1", "Menu Screen", nullptr));
        lablePasterBtn->setText(QCoreApplication::translate("NextWindow1", "Lable Paster Calibration", nullptr));
        encoderBtn->setText(QCoreApplication::translate("NextWindow1", "Encoder Calibration", nullptr));
        cameraBtn->setText(QCoreApplication::translate("NextWindow1", "Camera ligthning Calibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NextWindow1: public Ui_NextWindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTWINDOW1_H
