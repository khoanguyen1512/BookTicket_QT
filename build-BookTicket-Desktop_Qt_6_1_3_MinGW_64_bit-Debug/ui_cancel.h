/********************************************************************************
** Form generated from reading UI file 'cancel.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCEL_H
#define UI_CANCEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cancel
{
public:
    QPushButton *btnCancel;
    QComboBox *cmbSeats;
    QLabel *lblInfo;
    QLabel *label;

    void setupUi(QDialog *cancel)
    {
        if (cancel->objectName().isEmpty())
            cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->resize(243, 106);
        cancel->setMinimumSize(QSize(243, 106));
        cancel->setMaximumSize(QSize(243, 106));
        btnCancel = new QPushButton(cancel);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(80, 70, 75, 23));
        cmbSeats = new QComboBox(cancel);
        cmbSeats->setObjectName(QString::fromUtf8("cmbSeats"));
        cmbSeats->setGeometry(QRect(110, 20, 121, 22));
        lblInfo = new QLabel(cancel);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(50, 100, 151, 16));
        label = new QLabel(cancel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 91, 21));

        retranslateUi(cancel);

        QMetaObject::connectSlotsByName(cancel);
    } // setupUi

    void retranslateUi(QDialog *cancel)
    {
        cancel->setWindowTitle(QCoreApplication::translate("cancel", "Cancel Ticket", nullptr));
        btnCancel->setText(QCoreApplication::translate("cancel", "Cancel", nullptr));
        lblInfo->setText(QString());
        label->setText(QCoreApplication::translate("cancel", "Select Seat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cancel: public Ui_cancel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCEL_H
