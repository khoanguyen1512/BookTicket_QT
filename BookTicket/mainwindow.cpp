#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTimer>
QTimer *timer;
int cnt = 10000;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("D:/Qttest/Book ticket/img/background-đẹp4-1024x525.jpg");
    int w = ui->lbl_bg->width();
    int h = ui->lbl_bg->height();
    ui->lbl_bg->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->lbl_bg_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->lbl_bg_5->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    QPixmap pix1("D:/Qttest/Book ticket/img/Screenshot 2021-11-12 222658.png");
    int w1 = ui->label_pic->width();
    int h1 = ui->label_pic->height();
    ui->label_pic->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));
    QPixmap pix2("D:/Qttest/Book ticket/img/spiderman.jpg");
    ui->lbl_background0->setPixmap(pix2.scaled(780,430,Qt::KeepAspectRatio));
    QPixmap pix3("D:/Qttest/Book ticket/img/themedium.jpg");
    ui->lbl_background0_2->setPixmap(pix3.scaled(780,430,Qt::KeepAspectRatio));
    QPixmap pix4("D:/Qttest/Book ticket/img/endgame.jpeg");
    ui->lbl_background0_3->setPixmap(pix4.scaled(780,430,Qt::KeepAspectRatio));

    ui->stackedWidget->insertWidget(1, & login);
    connect(& login, SIGNAL(HomeClicked()), this, SLOT(moveHome()));


    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timer_timeout()));
    timer->start();
//    timer_timeout();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::moveHome()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->textBrowser->setText(" ");
}
void MainWindow::on_pushButton_7_clicked()
{
    QFile file("D:\\Qttest\\Book ticket\\BookTicket\\Quyenloi.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}

void MainWindow::on_pushButton_8_clicked()
{
    QFile file("D:\\Qttest\\Book ticket\\BookTicket\\canwehelp.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);

    ui->textBrowser->setText(in.readAll());
}


void MainWindow::on_pushButton_4_clicked()
{
    QString link = "https://www.facebook.com/profile.php?id=100038815843023";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_pushButton_5_clicked()
{
    QString link = "https://www.youtube.com/watch?v=oFw-erSp3W8";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_pushButton_6_clicked()
{
    QString link = "https://github.com/khoanguyen1512";
    QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_btn_Movies_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}
void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_24_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_25_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_27_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_26_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::timer_timeout()
{

    cnt--;
    ui->test->setText(QString::number(cnt));
    switch(cnt%9){
    case 0:
        ui->stackedWidget_2->setCurrentIndex(1);
        break;
    case 3:
        ui->stackedWidget_2->setCurrentIndex(2);
        break;
    case 6:
        ui->stackedWidget_2->setCurrentIndex(0);
        break;
    }
}


