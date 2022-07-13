/********************************************************************************
** Form generated from reading UI file 'book.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_H
#define UI_BOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_book
{
public:
    QPushButton *btnBook;
    QLabel *label;
    QLabel *lblInfo;
    QComboBox *cmbSeats;

    void setupUi(QDialog *book)
    {
        if (book->objectName().isEmpty())
            book->setObjectName(QString::fromUtf8("book"));
        book->resize(243, 106);
        book->setMinimumSize(QSize(243, 106));
        book->setMaximumSize(QSize(243, 106));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/feather/check-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        book->setWindowIcon(icon);
        btnBook = new QPushButton(book);
        btnBook->setObjectName(QString::fromUtf8("btnBook"));
        btnBook->setGeometry(QRect(80, 60, 75, 23));
        label = new QLabel(book);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 91, 21));
        lblInfo = new QLabel(book);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(60, 100, 151, 16));
        cmbSeats = new QComboBox(book);
        cmbSeats->setObjectName(QString::fromUtf8("cmbSeats"));
        cmbSeats->setGeometry(QRect(110, 10, 121, 22));

        retranslateUi(book);

        QMetaObject::connectSlotsByName(book);
    } // setupUi

    void retranslateUi(QDialog *book)
    {
        book->setWindowTitle(QCoreApplication::translate("book", "Book Ticket", nullptr));
        btnBook->setText(QCoreApplication::translate("book", "Book", nullptr));
        label->setText(QCoreApplication::translate("book", "Select Seat", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class book: public Ui_book {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_H
