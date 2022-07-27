/********************************************************************************
** Form generated from reading UI file 'encodercalibrationscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCODERCALIBRATIONSCREEN_H
#define UI_ENCODERCALIBRATIONSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncoderCalibrationScreen
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *encsmL1PlainText;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QPlainTextEdit *encsmL2PlainText;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QPlainTextEdit *encsmL3PlainText;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *encsrecalibrateBtn;
    QPushButton *encssaveBtn;
    QPushButton *encsbackBtn;

    void setupUi(QDialog *EncoderCalibrationScreen)
    {
        if (EncoderCalibrationScreen->objectName().isEmpty())
            EncoderCalibrationScreen->setObjectName(QString::fromUtf8("EncoderCalibrationScreen"));
        EncoderCalibrationScreen->resize(1366, 768);
        horizontalLayoutWidget_2 = new QWidget(EncoderCalibrationScreen);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(90, 100, 449, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        encsmL1PlainText = new QPlainTextEdit(horizontalLayoutWidget_2);
        encsmL1PlainText->setObjectName(QString::fromUtf8("encsmL1PlainText"));
        sizePolicy.setHeightForWidth(encsmL1PlainText->sizePolicy().hasHeightForWidth());
        encsmL1PlainText->setSizePolicy(sizePolicy);
        encsmL1PlainText->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_2->addWidget(encsmL1PlainText);

        horizontalLayoutWidget_3 = new QWidget(EncoderCalibrationScreen);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(90, 150, 449, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        encsmL2PlainText = new QPlainTextEdit(horizontalLayoutWidget_3);
        encsmL2PlainText->setObjectName(QString::fromUtf8("encsmL2PlainText"));
        sizePolicy.setHeightForWidth(encsmL2PlainText->sizePolicy().hasHeightForWidth());
        encsmL2PlainText->setSizePolicy(sizePolicy);
        encsmL2PlainText->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_3->addWidget(encsmL2PlainText);

        horizontalLayoutWidget_4 = new QWidget(EncoderCalibrationScreen);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(90, 200, 449, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        encsmL3PlainText = new QPlainTextEdit(horizontalLayoutWidget_4);
        encsmL3PlainText->setObjectName(QString::fromUtf8("encsmL3PlainText"));
        sizePolicy.setHeightForWidth(encsmL3PlainText->sizePolicy().hasHeightForWidth());
        encsmL3PlainText->setSizePolicy(sizePolicy);
        encsmL3PlainText->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_4->addWidget(encsmL3PlainText);

        horizontalLayoutWidget = new QWidget(EncoderCalibrationScreen);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 340, 731, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        encsrecalibrateBtn = new QPushButton(horizontalLayoutWidget);
        encsrecalibrateBtn->setObjectName(QString::fromUtf8("encsrecalibrateBtn"));
        sizePolicy.setHeightForWidth(encsrecalibrateBtn->sizePolicy().hasHeightForWidth());
        encsrecalibrateBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(encsrecalibrateBtn);

        encssaveBtn = new QPushButton(horizontalLayoutWidget);
        encssaveBtn->setObjectName(QString::fromUtf8("encssaveBtn"));
        sizePolicy.setHeightForWidth(encssaveBtn->sizePolicy().hasHeightForWidth());
        encssaveBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(encssaveBtn);

        encsbackBtn = new QPushButton(horizontalLayoutWidget);
        encsbackBtn->setObjectName(QString::fromUtf8("encsbackBtn"));
        sizePolicy.setHeightForWidth(encsbackBtn->sizePolicy().hasHeightForWidth());
        encsbackBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(encsbackBtn);


        retranslateUi(EncoderCalibrationScreen);

        QMetaObject::connectSlotsByName(EncoderCalibrationScreen);
    } // setupUi

    void retranslateUi(QDialog *EncoderCalibrationScreen)
    {
        EncoderCalibrationScreen->setWindowTitle(QCoreApplication::translate("EncoderCalibrationScreen", "Encoder Calibration", nullptr));
        label_2->setText(QCoreApplication::translate("EncoderCalibrationScreen", "Measured Length - 1", nullptr));
        label_3->setText(QCoreApplication::translate("EncoderCalibrationScreen", "Measured Length - 2", nullptr));
        label_4->setText(QCoreApplication::translate("EncoderCalibrationScreen", "Measured Length - 3", nullptr));
        encsrecalibrateBtn->setText(QCoreApplication::translate("EncoderCalibrationScreen", "Re-Calibrate", nullptr));
        encssaveBtn->setText(QCoreApplication::translate("EncoderCalibrationScreen", "Save", nullptr));
        encsbackBtn->setText(QCoreApplication::translate("EncoderCalibrationScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncoderCalibrationScreen: public Ui_EncoderCalibrationScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCODERCALIBRATIONSCREEN_H
