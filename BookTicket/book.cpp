#include "book.h"
#include "ui_book.h"

book::book(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::book)
{
    ui->setupUi(this);
}

book::~book()
{
    delete ui;
}
void book::updateUI()
{
    ui->cmbSeats->clear();
    ui->lblInfo->setText("");

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("select Seat from movie_ticket_booking where Available='Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
       }

    while(query.next())
    {
        ui->cmbSeats->addItem(query.value(0).toString());
    }

    if(ui->cmbSeats->count()<=0)
        ui->btnBook->setEnabled(false);
}
void book::updateUI_2()
{
    ui->cmbSeats->clear();
    ui->lblInfo->setText("");

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("select Seat from movie_ticket_booking where Available1='Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
       }

    while(query.next())
    {
        ui->cmbSeats->addItem(query.value(0).toString());
    }

    if(ui->cmbSeats->count()<=0)
        ui->btnBook->setEnabled(false);
}
void book::updateUI_3()
{
    ui->cmbSeats->clear();
    ui->lblInfo->setText("");

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("select Seat from movie_ticket_booking where Available2='Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
       }

    while(query.next())
    {
        ui->cmbSeats->addItem(query.value(0).toString());
    }

    if(ui->cmbSeats->count()<=0)
        ui->btnBook->setEnabled(false);
}
void book::on_btnBook_clicked()
{
    QString sSeat = ui->cmbSeats->currentText();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    if(Flag==0){
    query.prepare("update movie_ticket_booking set Available='K' where Seat= '" + sSeat +"'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        if(query.numRowsAffected() > 0)
        {
            ui->lblInfo->setText("Success!");
            qDebug() << "read was successful "<< query.lastQuery();
        }
        else
        {
            ui->lblInfo->setText("Unable to update data");
        }
       }

    updateUI();
    emit mysignal();
    }else if(Flag==1){
        query.prepare("update movie_ticket_booking set Available1='K' where Seat= '" + sSeat +"'");

        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
            ui->lblInfo->setText(query.lastError().text());
        }
        else{
            if(query.numRowsAffected() > 0)
            {
                ui->lblInfo->setText("Success!");
                qDebug() << "read was successful "<< query.lastQuery();
            }
            else
            {
                ui->lblInfo->setText("Unable to update data");
            }
           }

        updateUI_2();
        emit mysignal2();
        }else if(Flag==2){
        query.prepare("update movie_ticket_booking set Available2='K' where Seat= '" + sSeat +"'");

        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
            ui->lblInfo->setText(query.lastError().text());
        }
        else{
            if(query.numRowsAffected() > 0)
            {
                ui->lblInfo->setText("Success!");
                qDebug() << "read was successful "<< query.lastQuery();
            }
            else
            {
                ui->lblInfo->setText("Unable to update data");
            }
           }

        updateUI_3();
        emit mysignal4();
        }

}
