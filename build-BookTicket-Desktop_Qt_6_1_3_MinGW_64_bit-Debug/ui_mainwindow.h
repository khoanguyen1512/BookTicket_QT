/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_pic;
    QLabel *lbl_bg;
    QPushButton *pushButton_3;
    QPushButton *btn_Movies;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QLabel *lbl_bg_3;
    QPushButton *pushButton_8;
    QLabel *label_5;
    QPushButton *pushButton_9;
    QLabel *label_6;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_3;
    QLabel *lbl_bg_5;
    QStackedWidget *stackedWidget_2;
    QWidget *page_7;
    QPushButton *pushButton_19;
    QLabel *lbl_background0;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QLabel *test;
    QWidget *page_9;
    QPushButton *pushButton_20;
    QLabel *lbl_background0_2;
    QPushButton *pushButton_22;
    QPushButton *pushButton_27;
    QWidget *page_8;
    QPushButton *pushButton_21;
    QLabel *lbl_background0_3;
    QPushButton *btn_book;
    QPushButton *btn_home;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(798, 487);
        MainWindow->setMinimumSize(QSize(798, 487));
        MainWindow->setMaximumSize(QSize(798, 487));
        QFont font;
        font.setPointSize(8);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/feather/airplay.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, 0, 801, 491));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: rgb(67, 67, 67);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(639, 80, 151, 40));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/feather/eye-off.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 0, 211, 70));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color: black;"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 80, 130, 40));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/feather/log-in.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 70, 936, 61));
        label_2->setStyleSheet(QString::fromUtf8("background:black;"));
        label_pic = new QLabel(page);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(0, 0, 151, 70));
        lbl_bg = new QLabel(page);
        lbl_bg->setObjectName(QString::fromUtf8("lbl_bg"));
        lbl_bg->setGeometry(QRect(-1, -7, 936, 491));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 80, 130, 40));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/feather/alert-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        btn_Movies = new QPushButton(page);
        btn_Movies->setObjectName(QString::fromUtf8("btn_Movies"));
        btn_Movies->setGeometry(QRect(340, 80, 130, 40));
        btn_Movies->setFont(font1);
        btn_Movies->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/feather/award.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Movies->setIcon(icon4);
        stackedWidget->addWidget(page);
        lbl_bg->raise();
        label_2->raise();
        label_pic->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        btn_Movies->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 80, 121, 40));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        pushButton_7->setIcon(icon3);
        lbl_bg_3 = new QLabel(page_2);
        lbl_bg_3->setObjectName(QString::fromUtf8("lbl_bg_3"));
        lbl_bg_3->setGeometry(QRect(-1, -7, 936, 491));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 80, 201, 40));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/feather/alert-octagon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon5);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 0, 211, 70));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background: rgb(185, 192, 255);\n"
"color: black;"));
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        pushButton_9 = new QPushButton(page_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(660, 80, 130, 40));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color: rgb(85,170,255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/feather/home.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon6);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 70, 936, 61));
        label_6->setStyleSheet(QString::fromUtf8("background:black;"));
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(135, 161, 511, 261));
        QFont font3;
        font3.setPointSize(10);
        textBrowser->setFont(font3);
        textBrowser->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:rgb(138, 146, 255)"));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 220, 41, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color:rgb(0, 0, 127);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(85,170,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/feather/facebook.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon7);
        pushButton_5 = new QPushButton(page_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(20, 270, 41, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color:rgb(175, 0, 3);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 14, 26);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/feather/youtube.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon8);
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 320, 41, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 25px;\n"
"background-color:rgb(60, 0, 90);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(132, 0, 198);\n"
"color: rgb(255,255,255);\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/feather/github.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon9);
        stackedWidget->addWidget(page_2);
        lbl_bg_3->raise();
        label_5->raise();
        label_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        textBrowser->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        lbl_bg_5 = new QLabel(page_3);
        lbl_bg_5->setObjectName(QString::fromUtf8("lbl_bg_5"));
        lbl_bg_5->setGeometry(QRect(-1, -7, 936, 491));
        stackedWidget_2 = new QStackedWidget(page_3);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(9, 9, 781, 451));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        pushButton_19 = new QPushButton(page_7);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(700, 190, 81, 71));
        pushButton_19->setMaximumSize(QSize(81, 71));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        pushButton_19->setFont(font4);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/feather/chevrons-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_19->setIcon(icon10);
        pushButton_19->setAutoRepeat(true);
        lbl_background0 = new QLabel(page_7);
        lbl_background0->setObjectName(QString::fromUtf8("lbl_background0"));
        lbl_background0->setGeometry(QRect(0, 10, 781, 431));
        lbl_background0->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 76)"));
        lbl_background0->setAlignment(Qt::AlignCenter);
        pushButton_25 = new QPushButton(page_7);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(640, 30, 130, 40));
        pushButton_25->setFont(font4);
        pushButton_25->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
" 	color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        pushButton_25->setIcon(icon6);
        pushButton_26 = new QPushButton(page_7);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setGeometry(QRect(640, 80, 130, 40));
        pushButton_26->setFont(font4);
        pushButton_26->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/img/feather/chevron-right (2).svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_26->setIcon(icon11);
        test = new QLabel(page_7);
        test->setObjectName(QString::fromUtf8("test"));
        test->setGeometry(QRect(100, 180, 91, 81));
        QFont font5;
        font5.setPointSize(18);
        test->setFont(font5);
        test->setAlignment(Qt::AlignCenter);
        stackedWidget_2->addWidget(page_7);
        test->raise();
        lbl_background0->raise();
        pushButton_19->raise();
        pushButton_25->raise();
        pushButton_26->raise();
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        pushButton_20 = new QPushButton(page_9);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(700, 190, 81, 71));
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"    overflow: hidden;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        pushButton_20->setIcon(icon10);
        lbl_background0_2 = new QLabel(page_9);
        lbl_background0_2->setObjectName(QString::fromUtf8("lbl_background0_2"));
        lbl_background0_2->setGeometry(QRect(0, 10, 781, 431));
        lbl_background0_2->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 76)"));
        lbl_background0_2->setAlignment(Qt::AlignCenter);
        pushButton_22 = new QPushButton(page_9);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setGeometry(QRect(640, 30, 130, 40));
        pushButton_22->setFont(font4);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        pushButton_22->setIcon(icon6);
        pushButton_27 = new QPushButton(page_9);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setGeometry(QRect(640, 80, 130, 40));
        pushButton_27->setFont(font4);
        pushButton_27->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        pushButton_27->setIcon(icon11);
        stackedWidget_2->addWidget(page_9);
        lbl_background0_2->raise();
        pushButton_20->raise();
        pushButton_22->raise();
        pushButton_27->raise();
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        pushButton_21 = new QPushButton(page_8);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setGeometry(QRect(700, 190, 81, 71));
        pushButton_21->setFont(font);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"    overflow: hidden;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:clicked{\n"
"    border: none;\n"
"\n"
"}"));
        pushButton_21->setIcon(icon10);
        pushButton_21->setAutoRepeat(false);
        pushButton_21->setAutoDefault(false);
        lbl_background0_3 = new QLabel(page_8);
        lbl_background0_3->setObjectName(QString::fromUtf8("lbl_background0_3"));
        lbl_background0_3->setGeometry(QRect(0, 10, 781, 431));
        lbl_background0_3->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 76)"));
        lbl_background0_3->setAlignment(Qt::AlignCenter);
        btn_book = new QPushButton(page_8);
        btn_book->setObjectName(QString::fromUtf8("btn_book"));
        btn_book->setGeometry(QRect(640, 80, 130, 40));
        btn_book->setFont(font4);
        btn_book->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        btn_book->setIcon(icon11);
        btn_home = new QPushButton(page_8);
        btn_home->setObjectName(QString::fromUtf8("btn_home"));
        btn_home->setGeometry(QRect(640, 30, 130, 40));
        btn_home->setFont(font4);
        btn_home->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: Transparent;\n"
"    background-repeat:no-repeat;\n"
"    border: none;\n"
"    cursor:pointer;\n"
"	overflow: hidden;\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(50,110,255);\n"
"color: rgb(255,255,255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(50,110,255);\n"
"}"));
        btn_home->setIcon(icon6);
        stackedWidget_2->addWidget(page_8);
        lbl_background0_3->raise();
        pushButton_21->raise();
        btn_home->raise();
        btn_book->raise();
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cinema", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close App", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CINEMA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_2->setText(QString());
        label_pic->setText(QString());
        lbl_bg->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "ABOUT", nullptr));
        btn_Movies->setText(QCoreApplication::translate("MainWindow", "Movies", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Polici", nullptr));
        lbl_bg_3->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Can we help?", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ABOUT", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_6->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        lbl_bg_5->setText(QString());
        pushButton_19->setText(QString());
        lbl_background0->setText(QString());
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "BOOK", nullptr));
        test->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_20->setText(QString());
        lbl_background0_2->setText(QString());
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "BOOK", nullptr));
        pushButton_21->setText(QString());
        lbl_background0_3->setText(QString());
        btn_book->setText(QCoreApplication::translate("MainWindow", "BOOK", nullptr));
        btn_home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
