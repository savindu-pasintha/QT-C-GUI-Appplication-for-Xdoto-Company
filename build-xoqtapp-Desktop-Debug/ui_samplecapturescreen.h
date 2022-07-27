/********************************************************************************
** Form generated from reading UI file 'samplecapturescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLECAPTURESCREEN_H
#define UI_SAMPLECAPTURESCREEN_H

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

class Ui_SampleCaptureScreen
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *scscaptureBtn;
    QPushButton *scssaveBtn;
    QPushButton *scsbackBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *scscanPLainText;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *scscaptureLengthPlainText;

    void setupUi(QDialog *SampleCaptureScreen)
    {
        if (SampleCaptureScreen->objectName().isEmpty())
            SampleCaptureScreen->setObjectName(QString::fromUtf8("SampleCaptureScreen"));
        SampleCaptureScreen->resize(1366, 768);
        horizontalLayoutWidget = new QWidget(SampleCaptureScreen);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(360, 330, 611, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        scscaptureBtn = new QPushButton(horizontalLayoutWidget);
        scscaptureBtn->setObjectName(QString::fromUtf8("scscaptureBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scscaptureBtn->sizePolicy().hasHeightForWidth());
        scscaptureBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(scscaptureBtn);

        scssaveBtn = new QPushButton(horizontalLayoutWidget);
        scssaveBtn->setObjectName(QString::fromUtf8("scssaveBtn"));
        sizePolicy.setHeightForWidth(scssaveBtn->sizePolicy().hasHeightForWidth());
        scssaveBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(scssaveBtn);

        scsbackBtn = new QPushButton(horizontalLayoutWidget);
        scsbackBtn->setObjectName(QString::fromUtf8("scsbackBtn"));
        sizePolicy.setHeightForWidth(scsbackBtn->sizePolicy().hasHeightForWidth());
        scsbackBtn->setSizePolicy(sizePolicy);
        scsbackBtn->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(scsbackBtn);

        horizontalLayoutWidget_2 = new QWidget(SampleCaptureScreen);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(360, 121, 611, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        scscanPLainText = new QPlainTextEdit(horizontalLayoutWidget_2);
        scscanPLainText->setObjectName(QString::fromUtf8("scscanPLainText"));
        scscanPLainText->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_2->addWidget(scscanPLainText);

        horizontalLayoutWidget_3 = new QWidget(SampleCaptureScreen);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(360, 211, 611, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        scscaptureLengthPlainText = new QPlainTextEdit(horizontalLayoutWidget_3);
        scscaptureLengthPlainText->setObjectName(QString::fromUtf8("scscaptureLengthPlainText"));
        scscaptureLengthPlainText->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_3->addWidget(scscaptureLengthPlainText);


        retranslateUi(SampleCaptureScreen);

        QMetaObject::connectSlotsByName(SampleCaptureScreen);
    } // setupUi

    void retranslateUi(QDialog *SampleCaptureScreen)
    {
        SampleCaptureScreen->setWindowTitle(QCoreApplication::translate("SampleCaptureScreen", "Sample Capture", nullptr));
        scscaptureBtn->setText(QCoreApplication::translate("SampleCaptureScreen", "Capture", nullptr));
        scssaveBtn->setText(QCoreApplication::translate("SampleCaptureScreen", "Save", nullptr));
        scsbackBtn->setText(QCoreApplication::translate("SampleCaptureScreen", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("SampleCaptureScreen", "Scan/Enter Bar Code", nullptr));
        label->setText(QCoreApplication::translate("SampleCaptureScreen", "Capture Length", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SampleCaptureScreen: public Ui_SampleCaptureScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLECAPTURESCREEN_H
