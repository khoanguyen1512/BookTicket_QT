#ifndef INFO_H
#define INFO_H

#include <QDialog>

namespace Ui {
class info;
}

class info : public QDialog
{
    Q_OBJECT

public:
    explicit info(QWidget *parent = nullptr);
    ~info();
signals:
    void infoClicked();

private slots:   
    void on_btn_home_clicked();


    void on_listView_activated(const QModelIndex &index);

private:
    Ui::info *ui;

};


#endif // INFO_H
