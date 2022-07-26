/********************************************************************************
** Form generated from reading UI file 'defectdetectiondialogscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFECTDETECTIONDIALOGSCREEN_H
#define UI_DEFECTDETECTIONDIALOGSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DefectDetectionDialogScreen
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *dddscomfirmBtn;
    QPushButton *dddsbackBtn;
    QPushButton *dddsstartBtn;

    void setupUi(QDialog *DefectDetectionDialogScreen)
    {
        if (DefectDetectionDialogScreen->objectName().isEmpty())
            DefectDetectionDialogScreen->setObjectName(QString::fromUtf8("DefectDetectionDialogScreen"));
        DefectDetectionDialogScreen->resize(1366, 768);
        horizontalLayoutWidget = new QWidget(DefectDetectionDialogScreen);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 110, 901, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        dddscomfirmBtn = new QPushButton(horizontalLayoutWidget);
        dddscomfirmBtn->setObjectName(QString::fromUtf8("dddscomfirmBtn"));
        sizePolicy.setHeightForWidth(dddscomfirmBtn->sizePolicy().hasHeightForWidth());
        dddscomfirmBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dddscomfirmBtn);

        dddsbackBtn = new QPushButton(DefectDetectionDialogScreen);
        dddsbackBtn->setObjectName(QString::fromUtf8("dddsbackBtn"));
        dddsbackBtn->setGeometry(QRect(90, 540, 171, 51));
        dddsstartBtn = new QPushButton(DefectDetectionDialogScreen);
        dddsstartBtn->setObjectName(QString::fromUtf8("dddsstartBtn"));
        dddsstartBtn->setGeometry(QRect(590, 330, 191, 181));

        retranslateUi(DefectDetectionDialogScreen);

        QMetaObject::connectSlotsByName(DefectDetectionDialogScreen);
    } // setupUi

    void retranslateUi(QDialog *DefectDetectionDialogScreen)
    {
        DefectDetectionDialogScreen->setWindowTitle(QCoreApplication::translate("DefectDetectionDialogScreen", "Defect Detection", nullptr));
        label->setText(QCoreApplication::translate("DefectDetectionDialogScreen", "Current Quality : xxxxxxxx", nullptr));
        dddscomfirmBtn->setText(QCoreApplication::translate("DefectDetectionDialogScreen", "Confirm", nullptr));
        dddsbackBtn->setText(QCoreApplication::translate("DefectDetectionDialogScreen", "Back", nullptr));
        dddsstartBtn->setText(QCoreApplication::translate("DefectDetectionDialogScreen", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DefectDetectionDialogScreen: public Ui_DefectDetectionDialogScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFECTDETECTIONDIALOGSCREEN_H
