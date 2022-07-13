#include "info.h"
#include "ui_info.h"
#include "login.h"
#include <QPixmap>
#include <QMessageBox>
#include "mainwindow.h"
info::info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    QPixmap pix("D:/Qttest/Book ticket/img/background-đẹp4-1024x525.jpg");
    int w = ui->lbl_bgd->width();
    int h = ui->lbl_bgd->height();
    ui->lbl_bgd->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

info::~info()
{
    delete ui;
}

void info::on_btn_home_clicked()
{
    emit infoClicked();
}


void info::on_listView_activated(const QModelIndex &index)
{
    Login conn;
    QString val=ui->listView->model()->data(index).toString();

    if(!conn.connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from login where UserName='"+val+"' ");
    if(qry.exec())
    {
        while(qry.next()){
           ui->txt_username->setText(qry.value(1).toString());
           ui->txt_pass->setText(qry.value(2).toString());
           ui->txt_name->setText(qry.value(3).toString());
           ui->txt_age->setText(qry.value(4).toString());
           ui->txt_email->setText(qry.value(5).toString());
        }
        conn.connClose();
    }else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}












