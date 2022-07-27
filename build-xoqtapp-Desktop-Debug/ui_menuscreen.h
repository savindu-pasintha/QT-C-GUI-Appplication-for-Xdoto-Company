/********************************************************************************
** Form generated from reading UI file 'menuscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSCREEN_H
#define UI_MENUSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuScreen
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *mcameraLightBtn;
    QPushButton *mencoderCalibraitionBtn;
    QHBoxLayout *horizontalLayout;
    QPushButton *mlabelPasterBtn;
    QPushButton *msetThresholdBtn;
    QPushButton *msampleGenerationBtn;
    QPushButton *mmodeleditBtn;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mtoolBtn;
    QPushButton *mbackBtn;

    void setupUi(QDialog *MenuScreen)
    {
        if (MenuScreen->objectName().isEmpty())
            MenuScreen->setObjectName(QString::fromUtf8("MenuScreen"));
        MenuScreen->resize(1366, 768);
        verticalLayoutWidget = new QWidget(MenuScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 120, 451, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mcameraLightBtn = new QPushButton(verticalLayoutWidget);
        mcameraLightBtn->setObjectName(QString::fromUtf8("mcameraLightBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mcameraLightBtn->sizePolicy().hasHeightForWidth());
        mcameraLightBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mcameraLightBtn);

        mencoderCalibraitionBtn = new QPushButton(verticalLayoutWidget);
        mencoderCalibraitionBtn->setObjectName(QString::fromUtf8("mencoderCalibraitionBtn"));
        sizePolicy.setHeightForWidth(mencoderCalibraitionBtn->sizePolicy().hasHeightForWidth());
        mencoderCalibraitionBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mencoderCalibraitionBtn);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mlabelPasterBtn = new QPushButton(verticalLayoutWidget);
        mlabelPasterBtn->setObjectName(QString::fromUtf8("mlabelPasterBtn"));
        sizePolicy.setHeightForWidth(mlabelPasterBtn->sizePolicy().hasHeightForWidth());
        mlabelPasterBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mlabelPasterBtn);

        msetThresholdBtn = new QPushButton(verticalLayoutWidget);
        msetThresholdBtn->setObjectName(QString::fromUtf8("msetThresholdBtn"));
        sizePolicy.setHeightForWidth(msetThresholdBtn->sizePolicy().hasHeightForWidth());
        msetThresholdBtn->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(msetThresholdBtn);


        verticalLayout->addLayout(horizontalLayout);

        msampleGenerationBtn = new QPushButton(verticalLayoutWidget);
        msampleGenerationBtn->setObjectName(QString::fromUtf8("msampleGenerationBtn"));
        sizePolicy.setHeightForWidth(msampleGenerationBtn->sizePolicy().hasHeightForWidth());
        msampleGenerationBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(msampleGenerationBtn);

        mmodeleditBtn = new QPushButton(verticalLayoutWidget);
        mmodeleditBtn->setObjectName(QString::fromUtf8("mmodeleditBtn"));
        sizePolicy.setHeightForWidth(mmodeleditBtn->sizePolicy().hasHeightForWidth());
        mmodeleditBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(mmodeleditBtn);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mtoolBtn = new QPushButton(verticalLayoutWidget);
        mtoolBtn->setObjectName(QString::fromUtf8("mtoolBtn"));
        sizePolicy.setHeightForWidth(mtoolBtn->sizePolicy().hasHeightForWidth());
        mtoolBtn->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(mtoolBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        mbackBtn = new QPushButton(MenuScreen);
        mbackBtn->setObjectName(QString::fromUtf8("mbackBtn"));
        mbackBtn->setGeometry(QRect(810, 540, 231, 61));

        retranslateUi(MenuScreen);

        QMetaObject::connectSlotsByName(MenuScreen);
    } // setupUi

    void retranslateUi(QDialog *MenuScreen)
    {
        MenuScreen->setWindowTitle(QCoreApplication::translate("MenuScreen", "Menu", nullptr));
        mcameraLightBtn->setText(QCoreApplication::translate("MenuScreen", "Camera/Light Calibration", nullptr));
        mencoderCalibraitionBtn->setText(QCoreApplication::translate("MenuScreen", "Encoder Calibration", nullptr));
        mlabelPasterBtn->setText(QCoreApplication::translate("MenuScreen", "Label Paster Calibration", nullptr));
        msetThresholdBtn->setText(QCoreApplication::translate("MenuScreen", "Set Threshold(s)", nullptr));
        msampleGenerationBtn->setText(QCoreApplication::translate("MenuScreen", "Sample Generation", nullptr));
        mmodeleditBtn->setText(QCoreApplication::translate("MenuScreen", "Model Edit", nullptr));
        mtoolBtn->setText(QCoreApplication::translate("MenuScreen", "Tools", nullptr));
        mbackBtn->setText(QCoreApplication::translate("MenuScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuScreen: public Ui_MenuScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSCREEN_H
