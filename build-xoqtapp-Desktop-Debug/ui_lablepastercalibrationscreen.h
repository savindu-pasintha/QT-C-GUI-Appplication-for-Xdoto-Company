/********************************************************************************
** Form generated from reading UI file 'lablepastercalibrationscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABLEPASTERCALIBRATIONSCREEN_H
#define UI_LABLEPASTERCALIBRATIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LablePasterCalibrationScreen
{
public:
    QPushButton *lblpcstartBtn;
    QPushButton *lblpcbackBtn;

    void setupUi(QDialog *LablePasterCalibrationScreen)
    {
        if (LablePasterCalibrationScreen->objectName().isEmpty())
            LablePasterCalibrationScreen->setObjectName(QString::fromUtf8("LablePasterCalibrationScreen"));
        LablePasterCalibrationScreen->resize(1366, 768);
        lblpcstartBtn = new QPushButton(LablePasterCalibrationScreen);
        lblpcstartBtn->setObjectName(QString::fromUtf8("lblpcstartBtn"));
        lblpcstartBtn->setGeometry(QRect(170, 110, 221, 191));
        lblpcbackBtn = new QPushButton(LablePasterCalibrationScreen);
        lblpcbackBtn->setObjectName(QString::fromUtf8("lblpcbackBtn"));
        lblpcbackBtn->setGeometry(QRect(960, 440, 201, 61));

        retranslateUi(LablePasterCalibrationScreen);

        QMetaObject::connectSlotsByName(LablePasterCalibrationScreen);
    } // setupUi

    void retranslateUi(QDialog *LablePasterCalibrationScreen)
    {
        LablePasterCalibrationScreen->setWindowTitle(QCoreApplication::translate("LablePasterCalibrationScreen", "Label Paster Calibration", nullptr));
        lblpcstartBtn->setText(QCoreApplication::translate("LablePasterCalibrationScreen", "Start Calibration", nullptr));
        lblpcbackBtn->setText(QCoreApplication::translate("LablePasterCalibrationScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LablePasterCalibrationScreen: public Ui_LablePasterCalibrationScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABLEPASTERCALIBRATIONSCREEN_H
