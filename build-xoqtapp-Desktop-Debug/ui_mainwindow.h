/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *stopBtn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *imageLable;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveBtn;
    QPushButton *generateReportBtn;
    QPushButton *backBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1366, 768);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 20, 761, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        startBtn = new QPushButton(horizontalLayoutWidget);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));

        horizontalLayout->addWidget(startBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        stopBtn = new QPushButton(horizontalLayoutWidget);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));

        horizontalLayout->addWidget(stopBtn);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 110, 761, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        imageLable = new QLabel(verticalLayoutWidget);
        imageLable->setObjectName(QString::fromUtf8("imageLable"));

        verticalLayout->addWidget(imageLable);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(850, 70, 501, 671));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 520, 761, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(horizontalLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        saveBtn = new QPushButton(horizontalLayoutWidget_2);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        sizePolicy.setHeightForWidth(saveBtn->sizePolicy().hasHeightForWidth());
        saveBtn->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(saveBtn);

        generateReportBtn = new QPushButton(centralwidget);
        generateReportBtn->setObjectName(QString::fromUtf8("generateReportBtn"));
        generateReportBtn->setGeometry(QRect(620, 610, 171, 49));
        sizePolicy.setHeightForWidth(generateReportBtn->sizePolicy().hasHeightForWidth());
        generateReportBtn->setSizePolicy(sizePolicy);
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(30, 610, 185, 49));
        sizePolicy.setHeightForWidth(backBtn->sizePolicy().hasHeightForWidth());
        backBtn->setSizePolicy(sizePolicy);
        backBtn->setMaximumSize(QSize(16777, 16777215));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Defect Detection \342\200\223 In Progress", nullptr));
        startBtn->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stopBtn->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        imageLable->setText(QString());
        saveBtn->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        generateReportBtn->setText(QCoreApplication::translate("MainWindow", "Generate Report", nullptr));
        backBtn->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
