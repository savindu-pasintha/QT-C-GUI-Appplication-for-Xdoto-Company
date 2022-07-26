/********************************************************************************
** Form generated from reading UI file 'editsegmentsScreen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSEGMENTSSCREEN_H
#define UI_EDITSEGMENTSSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditSegments
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *edtsifBtn;
    QPushButton *edtdifreScanBtn;
    QPushButton *edtdifenroll;

    void setupUi(QDialog *EditSegments)
    {
        if (EditSegments->objectName().isEmpty())
            EditSegments->setObjectName(QString::fromUtf8("EditSegments"));
        EditSegments->resize(1366, 768);
        verticalLayoutWidget = new QWidget(EditSegments);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(420, 80, 381, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        edtsifBtn = new QPushButton(verticalLayoutWidget);
        edtsifBtn->setObjectName(QString::fromUtf8("edtsifBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edtsifBtn->sizePolicy().hasHeightForWidth());
        edtsifBtn->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(edtsifBtn);

        edtdifreScanBtn = new QPushButton(EditSegments);
        edtdifreScanBtn->setObjectName(QString::fromUtf8("edtdifreScanBtn"));
        edtdifreScanBtn->setGeometry(QRect(250, 340, 161, 61));
        sizePolicy.setHeightForWidth(edtdifreScanBtn->sizePolicy().hasHeightForWidth());
        edtdifreScanBtn->setSizePolicy(sizePolicy);
        edtdifenroll = new QPushButton(EditSegments);
        edtdifenroll->setObjectName(QString::fromUtf8("edtdifenroll"));
        edtdifenroll->setGeometry(QRect(800, 340, 161, 61));
        sizePolicy.setHeightForWidth(edtdifenroll->sizePolicy().hasHeightForWidth());
        edtdifenroll->setSizePolicy(sizePolicy);

        retranslateUi(EditSegments);

        QMetaObject::connectSlotsByName(EditSegments);
    } // setupUi

    void retranslateUi(QDialog *EditSegments)
    {
        EditSegments->setWindowTitle(QCoreApplication::translate("EditSegments", "Edit Segments", nullptr));
        edtsifBtn->setText(QCoreApplication::translate("EditSegments", "Edit Segments (If Required)", nullptr));
        edtdifreScanBtn->setText(QCoreApplication::translate("EditSegments", "Re Scan", nullptr));
        edtdifenroll->setText(QCoreApplication::translate("EditSegments", "Enroll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditSegments: public Ui_EditSegments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSEGMENTSSCREEN_H
