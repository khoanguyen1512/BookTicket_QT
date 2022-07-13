/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *btn_home;
    QLabel *label_4;
    QLabel *lbl_bgd;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *background_2;
    QWidget *tab_2;
    QLabel *background;
    QPushButton *btn_save;
    QLineEdit *txt_name;
    QLineEdit *txt_age;
    QLabel *lbl_age;
    QLabel *lbl_pass;
    QLabel *lbl_email;
    QLabel *lbl_username;
    QLineEdit *txt_pass;
    QLineEdit *txt_email;
    QLabel *lbl_name;
    QLineEdit *txt_username;
    QListView *listView;

    void setupUi(QDialog *info)
    {
        if (info->objectName().isEmpty())
            info->setObjectName(QString::fromUtf8("info"));
        info->resize(800, 480);
        stackedWidget = new QStackedWidget(info);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 801, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 80, 130, 40));
        QFont font;
        font.setPointSize(16);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color: black;"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 321, 70));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(185, 192, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush3(QColor(255, 255, 220, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label->setPalette(palette);
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        btn_home = new QPushButton(page);
        btn_home->setObjectName(QString::fromUtf8("btn_home"));
        btn_home->setGeometry(QRect(650, 80, 130, 40));
        btn_home->setFont(font);
        btn_home->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;"));
        btn_home->setAutoDefault(true);
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 70, 801, 91));
        label_4->setStyleSheet(QString::fromUtf8("background:black;"));
        lbl_bgd = new QLabel(page);
        lbl_bgd->setObjectName(QString::fromUtf8("lbl_bgd"));
        lbl_bgd->setGeometry(QRect(0, 0, 936, 481));
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 130, 801, 351));
        QFont font2;
        font2.setPointSize(10);
        tabWidget->setFont(font2);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        background_2 = new QLabel(tab);
        background_2->setObjectName(QString::fromUtf8("background_2"));
        background_2->setGeometry(QRect(0, 0, 791, 351));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        background = new QLabel(tab_2);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 791, 351));
        btn_save = new QPushButton(tab_2);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(320, 20, 130, 40));
        txt_name = new QLineEdit(tab_2);
        txt_name->setObjectName(QString::fromUtf8("txt_name"));
        txt_name->setGeometry(QRect(150, 110, 113, 30));
        txt_name->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;"));
        txt_age = new QLineEdit(tab_2);
        txt_age->setObjectName(QString::fromUtf8("txt_age"));
        txt_age->setGeometry(QRect(150, 150, 113, 30));
        txt_age->setStyleSheet(QString::fromUtf8("\n"
"background:white;\n"
"color:black;\n"
""));
        txt_age->setEchoMode(QLineEdit::Normal);
        lbl_age = new QLabel(tab_2);
        lbl_age->setObjectName(QString::fromUtf8("lbl_age"));
        lbl_age->setGeometry(QRect(30, 150, 81, 30));
        lbl_age->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;"));
        lbl_age->setAlignment(Qt::AlignCenter);
        lbl_pass = new QLabel(tab_2);
        lbl_pass->setObjectName(QString::fromUtf8("lbl_pass"));
        lbl_pass->setGeometry(QRect(30, 70, 81, 30));
        lbl_pass->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;"));
        lbl_pass->setAlignment(Qt::AlignCenter);
        lbl_email = new QLabel(tab_2);
        lbl_email->setObjectName(QString::fromUtf8("lbl_email"));
        lbl_email->setGeometry(QRect(30, 190, 81, 30));
        lbl_email->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;"));
        lbl_email->setAlignment(Qt::AlignCenter);
        lbl_username = new QLabel(tab_2);
        lbl_username->setObjectName(QString::fromUtf8("lbl_username"));
        lbl_username->setGeometry(QRect(30, 30, 81, 30));
        lbl_username->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;"));
        lbl_username->setAlignment(Qt::AlignCenter);
        txt_pass = new QLineEdit(tab_2);
        txt_pass->setObjectName(QString::fromUtf8("txt_pass"));
        txt_pass->setGeometry(QRect(150, 70, 113, 30));
        txt_pass->setStyleSheet(QString::fromUtf8("\n"
"background:white;\n"
"color:black;\n"
""));
        txt_pass->setEchoMode(QLineEdit::Normal);
        txt_email = new QLineEdit(tab_2);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));
        txt_email->setGeometry(QRect(150, 190, 113, 30));
        txt_email->setStyleSheet(QString::fromUtf8("\n"
"background:white;\n"
"color:black;\n"
""));
        txt_email->setEchoMode(QLineEdit::Normal);
        lbl_name = new QLabel(tab_2);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));
        lbl_name->setGeometry(QRect(30, 110, 81, 30));
        lbl_name->setAutoFillBackground(false);
        lbl_name->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color:black;"));
        lbl_name->setAlignment(Qt::AlignCenter);
        txt_username = new QLineEdit(tab_2);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));
        txt_username->setGeometry(QRect(150, 30, 113, 30));
        txt_username->setStyleSheet(QString::fromUtf8("\n"
"background:white;\n"
"color:black;\n"
""));
        txt_username->setEchoMode(QLineEdit::Normal);
        listView = new QListView(tab_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 20, 256, 281));
        tabWidget->addTab(tab_2, QString());
        background->raise();
        btn_save->raise();
        listView->raise();
        txt_username->raise();
        txt_pass->raise();
        lbl_name->raise();
        txt_email->raise();
        lbl_username->raise();
        lbl_pass->raise();
        lbl_age->raise();
        lbl_email->raise();
        txt_name->raise();
        txt_age->raise();
        stackedWidget->addWidget(page);
        lbl_bgd->raise();
        label_4->raise();
        label->raise();
        pushButton_2->raise();
        btn_home->raise();
        tabWidget->raise();

        retranslateUi(info);

        stackedWidget->setCurrentIndex(0);
        btn_home->setDefault(false);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(info);
    } // setupUi

    void retranslateUi(QDialog *info)
    {
        info->setWindowTitle(QCoreApplication::translate("info", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("info", "Screen 2", nullptr));
        label->setText(QCoreApplication::translate("info", "Welcom to cinema", nullptr));
        btn_home->setText(QCoreApplication::translate("info", "LOG OUT", nullptr));
        label_4->setText(QString());
        lbl_bgd->setText(QString());
        background_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("info", "Th\303\264ng tin ta\314\200i khoa\314\211n", nullptr));
        background->setText(QString());
        btn_save->setText(QCoreApplication::translate("info", "SAVE", nullptr));
        lbl_age->setText(QCoreApplication::translate("info", "Age", nullptr));
        lbl_pass->setText(QCoreApplication::translate("info", "Password", nullptr));
        lbl_email->setText(QCoreApplication::translate("info", "Email", nullptr));
        lbl_username->setText(QCoreApplication::translate("info", "UserName", nullptr));
        lbl_name->setText(QCoreApplication::translate("info", "Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("info", "Chi\314\211nh s\306\260\314\211a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class info: public Ui_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
