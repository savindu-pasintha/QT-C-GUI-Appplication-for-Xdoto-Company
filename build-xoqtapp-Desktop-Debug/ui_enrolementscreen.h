/********************************************************************************
** Form generated from reading UI file 'enrolementscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLEMENTSCREEN_H
#define UI_ENROLEMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnrolementScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *enrscurrentQuality;
    QPushButton *enrsenrollNew;
    QPushButton *enrsstartBtn;
    QPushButton *enrsmenuBtn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListView *listView;

    void setupUi(QDialog *EnrolementScreen)
    {
        if (EnrolementScreen->objectName().isEmpty())
            EnrolementScreen->setObjectName(QString::fromUtf8("EnrolementScreen"));
        EnrolementScreen->resize(1366, 768);
        verticalLayoutWidget = new QWidget(EnrolementScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(190, 80, 601, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        enrscurrentQuality = new QLabel(verticalLayoutWidget);
        enrscurrentQuality->setObjectName(QString::fromUtf8("enrscurrentQuality"));

        verticalLayout->addWidget(enrscurrentQuality);

        enrsenrollNew = new QPushButton(EnrolementScreen);
        enrsenrollNew->setObjectName(QString::fromUtf8("enrsenrollNew"));
        enrsenrollNew->setGeometry(QRect(190, 230, 211, 71));
        enrsstartBtn = new QPushButton(EnrolementScreen);
        enrsstartBtn->setObjectName(QString::fromUtf8("enrsstartBtn"));
        enrsstartBtn->setGeometry(QRect(910, 280, 171, 151));
        enrsmenuBtn = new QPushButton(EnrolementScreen);
        enrsmenuBtn->setObjectName(QString::fromUtf8("enrsmenuBtn"));
        enrsmenuBtn->setGeometry(QRect(880, 580, 261, 61));
        scrollArea = new QScrollArea(EnrolementScreen);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(190, 350, 321, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 239));
        listView = new QListView(scrollAreaWidgetContents);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(0, 0, 321, 241));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(EnrolementScreen);

        QMetaObject::connectSlotsByName(EnrolementScreen);
    } // setupUi

    void retranslateUi(QDialog *EnrolementScreen)
    {
        EnrolementScreen->setWindowTitle(QCoreApplication::translate("EnrolementScreen", "Enrollement", nullptr));
        enrscurrentQuality->setText(QCoreApplication::translate("EnrolementScreen", "Current Quality : xxxxxxxxxxxxxxxxxxxxxxxx", nullptr));
        enrsenrollNew->setText(QCoreApplication::translate("EnrolementScreen", "Enroll New", nullptr));
        enrsstartBtn->setText(QCoreApplication::translate("EnrolementScreen", "Start", nullptr));
        enrsmenuBtn->setText(QCoreApplication::translate("EnrolementScreen", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnrolementScreen: public Ui_EnrolementScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLEMENTSCREEN_H
