/********************************************************************************
** Form generated from reading UI file 'cameracalibrationscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERACALIBRATIONSCREEN_H
#define UI_CAMERACALIBRATIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraCalibrationScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *ccsbackBtn;
    QPushButton *ccssaveBtn;
    QPushButton *ccsrecalibrateBtn;

    void setupUi(QDialog *CameraCalibrationScreen)
    {
        if (CameraCalibrationScreen->objectName().isEmpty())
            CameraCalibrationScreen->setObjectName(QString::fromUtf8("CameraCalibrationScreen"));
        CameraCalibrationScreen->resize(1366, 768);
        verticalLayoutWidget = new QWidget(CameraCalibrationScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(940, 390, 201, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ccsbackBtn = new QPushButton(verticalLayoutWidget);
        ccsbackBtn->setObjectName(QString::fromUtf8("ccsbackBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ccsbackBtn->sizePolicy().hasHeightForWidth());
        ccsbackBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(ccsbackBtn);

        ccssaveBtn = new QPushButton(verticalLayoutWidget);
        ccssaveBtn->setObjectName(QString::fromUtf8("ccssaveBtn"));
        sizePolicy.setHeightForWidth(ccssaveBtn->sizePolicy().hasHeightForWidth());
        ccssaveBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(ccssaveBtn);

        ccsrecalibrateBtn = new QPushButton(verticalLayoutWidget);
        ccsrecalibrateBtn->setObjectName(QString::fromUtf8("ccsrecalibrateBtn"));
        sizePolicy.setHeightForWidth(ccsrecalibrateBtn->sizePolicy().hasHeightForWidth());
        ccsrecalibrateBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(ccsrecalibrateBtn);


        retranslateUi(CameraCalibrationScreen);

        QMetaObject::connectSlotsByName(CameraCalibrationScreen);
    } // setupUi

    void retranslateUi(QDialog *CameraCalibrationScreen)
    {
        CameraCalibrationScreen->setWindowTitle(QCoreApplication::translate("CameraCalibrationScreen", "Camera/Lightning Calibration", nullptr));
        ccsbackBtn->setText(QCoreApplication::translate("CameraCalibrationScreen", "Back", nullptr));
        ccssaveBtn->setText(QCoreApplication::translate("CameraCalibrationScreen", "Save", nullptr));
        ccsrecalibrateBtn->setText(QCoreApplication::translate("CameraCalibrationScreen", "Re-Calibrate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraCalibrationScreen: public Ui_CameraCalibrationScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERACALIBRATIONSCREEN_H
