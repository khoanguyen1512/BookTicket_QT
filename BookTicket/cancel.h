#ifndef CANCEL_H
#define CANCEL_H

#include <QDialog>
#include <QtSql>
#include "mydb.h"
namespace Ui {
class cancel;
}

class cancel : public QDialog
{
    Q_OBJECT

public:
    explicit cancel(QWidget *parent = nullptr);
    ~cancel();
    void updateUI();
    void updateUI_2();
    void updateUI_3();
    int Flag;
private slots:
    void on_btnCancel_clicked();

private:
    Ui::cancel *ui
    ;
signals:
 void mysignal1();
 void mysignal3();
 void mysignal5();
};

#endif // CANCEL_H
