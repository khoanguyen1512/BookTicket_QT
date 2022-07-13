#ifndef BOOK_H
#define BOOK_H

#include <QDialog>
#include <QtSql>
#include "mydb.h"
namespace Ui {
class book;
}

class book : public QDialog
{
    Q_OBJECT

public:
    explicit book(QWidget *parent = nullptr);
    ~book();
    void updateUI();
    void updateUI_2();
    void updateUI_3();
    int Flag ;
private slots:
    void on_btnBook_clicked();

private:
    Ui::book *ui;

signals:
 void mysignal();
 void mysignal2();
 void mysignal4();

};

#endif // BOOK_H
