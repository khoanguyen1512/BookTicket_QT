#ifndef LOGIN_H
#define LOGIN_H
#define Path_to_DB "D:/Qttest/Book ticket/tests/test.db"
#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QString>
#include "mydb.h"
#include "book.h"
#include "cancel.h"
#include <QPropertyAnimation>
#include <QDateTime>
#include <QTimer>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:

    QSqlDatabase myDB;
    void clearbook();
    void updatepoint();
    void showinfo();
    void showpoint();
    void saveinfo();
    void showtable();
    void showmovies();
    void showhistory();
    void showhistory1();
    void showcombobox();
    void totalmoney();
    void history();
    void history1();
    void history2();
    void bookseats();
    void resetseat();
    void seatchange();
    void seatchange2();
    void seatchange3();
    void clear();
    void connClose(){
        myDB.close();
        myDB.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        myDB=QSqlDatabase::addDatabase("QSQLITE");
        myDB.setDatabaseName(Path_to_DB);

        if(!myDB.open()){

            qDebug()<<("[+] Failed to open the database");
            return false;
        }else{

            qDebug()<<("[+] Connected....");
            return true;
        }

    }
public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void updateUI();
    void updateUI_2();
    void updateUI_3();
private:
    Ui::Login *ui;
    book *ptrBook;
    cancel *ptrCancel;
//    QPropertyAnimation *animation1;
//    QPropertyAnimation *animation2;
//    QPropertyAnimation *animation3;
//    QParallelAnimationGroup *animationGroup;
signals:
    void HomeClicked();

private slots:
    void on_btnBook_clicked();
    void on_btnCancel_clicked();
    void on_btnReset_clicked();


    void moveinfo();
    void on_btn_home_clicked();
    void on_btn_reg_clicked();
    void on_btn_save_clicked();
    void on_btn_login_clicked();
    void on_btn_clear_clicked();
    void on_btn_Login_clicked();
    void on_btn_clear2_clicked();


    void on_Show_pass_stateChanged(int arg1);
    void on_btn_home_2_clicked();
    void on_btn_save_2_clicked();
    void on_pushButton_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_btn_update_clicked();
    void on_btn_delete_clicked();
    void on_btn_home_7_clicked();



    void on_btn_reg_2_clicked();
//    void on_pushButton_4_clicked();
    void on_pushButton_2_clicked();
    void on_btn_add_clicked();
    void on_btn_clear_3_clicked();
    void on_btn_save_3_clicked();
    void on_comboBox_2_textActivated(const QString &arg1);
    void on_txt_tickets_textChanged(const QString &arg1);
    void on_btn_book_clicked();

    void on_tabWidget_tabBarClicked(int index);
    void on_tableView_2_clicked(const QModelIndex &index);
    void on_btn_cancel_clicked();
    void on_pushButton_5_clicked();

    void on_btn_seat_clicked();
    void on_btn_clear_2_clicked();
    void on_btn_movies_clicked();
    void on_btn_customer_info_clicked();
    void on_btn_history_clicked();
    void on_btn_point_clicked();

    void on_tableView_3_clicked(const QModelIndex &index);
    void on_tableView_4_clicked(const QModelIndex &index);
    void on_btn_update_2_clicked();
    void on_btn_delete_2_clicked();
    void on_btn_add_2_clicked();
};

#endif // LOGIN_H
