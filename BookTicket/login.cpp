#include "login.h"
#include "ui_login.h"
#include <QPixmap>
#include "login.h"
Login::Login(QWidget *parent) :
    QWidget(parent)
    ,ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Customer");
    ui->comboBox->addItem("Admin");

    ui->lineEdit->setPlaceholderText("UserName");
    ui->lineEdit_2->setPlaceholderText("Password");
    ui->lineEdit->setClearButtonEnabled(true);
    ui->lineEdit_2->setClearButtonEnabled(true);
    QIcon user("D:\\Qttest\\Book ticket\\img\\feather\\user.svg");
    QIcon pass("D:\\Qttest\\Book ticket\\img\\feather\\lock.svg");
    ui->lineEdit->addAction(user,QLineEdit::LeadingPosition);
    ui->lineEdit_2->addAction(pass,QLineEdit::LeadingPosition);


    ui->txt_username->setPlaceholderText("UserName");
    ui->txt_pass->setPlaceholderText("Password");
    ui->txt_age->setPlaceholderText("Age");
    ui->txt_name->setPlaceholderText("Name");
    ui->txt_email->setPlaceholderText("abc@gmail.com");
    ui->txt_phone->setPlaceholderText("0xxx");
    ui->txt_budget->setPlaceholderText("Nhap so tien nap!!!");
    ui->txt_tickets->setPlaceholderText("Nhap so ve!");
    ui->txt_username->setClearButtonEnabled(true);
    ui->txt_pass->setClearButtonEnabled(true);
    ui->txt_age->setClearButtonEnabled(true);
    ui->txt_name->setClearButtonEnabled(true);
    ui->txt_email->setClearButtonEnabled(true);
    ui->txt_phone->setClearButtonEnabled(true);
    ui->txt_username_2->setClearButtonEnabled(true);
    ui->txt_pass_2->setClearButtonEnabled(true);
    ui->txt_age_2->setClearButtonEnabled(true);
    ui->txt_name_2->setClearButtonEnabled(true);
    ui->txt_email_2->setClearButtonEnabled(true);
    ui->txt_phone_2->setClearButtonEnabled(true);
    ui->txt_username_5->setClearButtonEnabled(true);
    ui->txt_pass_5->setClearButtonEnabled(true);
    ui->txt_age_5->setClearButtonEnabled(true);
    ui->txt_name_5->setClearButtonEnabled(true);
    ui->txt_email_5->setClearButtonEnabled(true);
    ui->txt_phone_5->setClearButtonEnabled(true);
    ui->txt_budget_2->setClearButtonEnabled(true);
    ui->txt_budget->setClearButtonEnabled(true);

    QPixmap pix("D:/Qttest/Book ticket/img/background-đẹp4-1024x525.jpg");
    int w = ui->lbl_bg->width();
    int h = ui->lbl_bg->height();
    ui->lbl_bg->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->lbl_bg_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->lbl_bg2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->lbl_bg_5->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_bg->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_bg_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->label_bg_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->lbl_bgd->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->background->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->background_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->background_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->background_4->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QFileInfo checkFile(Path_to_DB);

    if(checkFile.isFile())
    {
    if(!connOpen())
        ui->lbl_Result->setText("[+] Failed to open the database");
    else
        ui->lbl_Result->setText("[+] Connected....");
    }



    QPixmap pm(":/img/img/infoImage.jpg");
    ui->lblInfoImage->setPixmap(pm);

    ptrBook  = new book(this);
    ptrCancel = new cancel(this);

    connect(ptrBook, &book::mysignal, this, &Login::updateUI);
    connect(ptrCancel, &cancel::mysignal1, this, &Login::updateUI);
    connect(ptrBook, &book::mysignal2, this, &Login::updateUI_2);
    connect(ptrCancel, &cancel::mysignal3, this, &Login::updateUI_2);
    connect(ptrBook, &book::mysignal4, this, &Login::updateUI_3);
    connect(ptrCancel, &cancel::mysignal5, this, &Login::updateUI_3);

    updateUI();
    updateUI_2();
    updateUI_3();

}
Login::~Login()
{
    delete ui;
    delete ptrBook;
    delete ptrCancel;
    myDB.close();
}


void Login::moveinfo()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void Login::showmovies(){
    QSqlQueryModel * modal=new QSqlQueryModel();
    connOpen();
    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("select * from Movies");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView_3->setModel(modal);
    connClose();
    qDebug() << (modal->rowCount());
}
void Login::showtable(){
    QSqlQueryModel * modal=new QSqlQueryModel();
    connOpen();
    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("select * from login");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    connClose();
    qDebug() << (modal->rowCount());
}
void Login::showhistory(){
    QSqlQueryModel * modal=new QSqlQueryModel();
    connOpen();
    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("select * from history");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView_4->setModel(modal);
    connClose();
    qDebug() << (modal->rowCount());
}
void Login::showhistory1(){
    QString UserName = ui->txt_username_2->text();
    QSqlQueryModel * modal=new QSqlQueryModel();
    connOpen();
    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("select Movies,DateTime,Tickets,price,Static,End,Seats from history where UserName='"+UserName+"'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView_2->setModel(modal);
    connClose();
    qDebug() << (modal->rowCount());
}
void Login::on_btn_history_clicked()
{
    clear();
    ui->stackedWidget_2->setCurrentIndex(2);
    showhistory();
}
void Login::on_btn_customer_info_clicked()
{
    clear();
    ui->stackedWidget_2->setCurrentIndex(0);
    showtable();
}
void Login::on_btn_movies_clicked()
{
    clear();
    ui->stackedWidget_2->setCurrentIndex(1);
    showmovies();
}
void Login::showcombobox(){
    connOpen();
    QSqlQuery query;
    query.prepare("select Name from Movies");

    if(query.exec())
    {
        qDebug() << "read was successful "<< query.lastQuery();
    while(query.next())
    {
        ui->comboBox_2->addItem(query.value(0).toString());
    }
    connClose();
    }
}

void Login::on_btn_Login_clicked()
{
    QString UserName, Password , Type;
    UserName = ui->lineEdit->text();
    Password = ui->lineEdit_2->text();
    Type = ui->comboBox->currentText();
    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("Select * from login where UserName='" + UserName + "' and Password ='" + Password +"' and Type='"+ Type +"'");
    if(qry.exec())
    {
        int count = 0;
        while(qry.next())
        {
            count++;
        }
        if(count==1)
        {
            ui->lbl_Result->setText("[+] Valid Username and Password");
            connClose();
            if(Type == "Admin"){
                ui->stackedWidget->setCurrentIndex(2);                
            }else{
                ui->stackedWidget->setCurrentIndex(3);
                ui->tabWidget->setCurrentIndex(0);
                showinfo();
            }

        }if(count>1)
        {
            ui->lbl_Result->setText("[+] Duplicate Username and Password");
        }if(count<1)
        {
            ui->lbl_Result->setText("[-] Wrong Username or Password");
        }
    }
}

void Login::on_btn_clear_clicked()
{
   ui->lineEdit->setText("");
   ui->lineEdit_2->setText("");
}


void Login::on_btn_home_clicked()
{
    emit HomeClicked();
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}


void Login::on_btn_reg_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Login::on_btn_login_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void Login::saveinfo(){
    QString Name, Age, Email, UserName, Pass, Phone;
    Name = ui->txt_name->text();
    Age = ui->txt_age->text();
    Email = ui->txt_email->text();
    UserName = ui->txt_username->text();
    Pass = ui->txt_pass->text();
    Phone = ui->txt_phone->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();

    QSqlQuery qry;
    qry.prepare("insert into login(UserName,Password,name,age,email,phone) values ('"+UserName+"','"+Pass+"','"+Name+"','"+Age+"','"+Email+"','"+Phone+"')");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Save"),tr("Saved"));
       connClose();
       ui->stackedWidget->setCurrentIndex(0);
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}

void Login::on_btn_save_clicked()
{
    QString  UserName;

    UserName = ui->txt_username->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();

    QSqlQuery qry;
    qry.prepare(QString("Select * from login where UserName ='" + UserName + "'"));

    if(qry.exec())
    {
        int count = 1;
        while(qry.next())
        {
            QString usernamefromdb = qry.value(0).toString();
            if(usernamefromdb == UserName ){
                count++;
            }
        }
        if(count > 1){
            QMessageBox::critical(this,tr("error"),tr("Duplicate Username"));

        }
        if(count == 1){
            saveinfo();
        }

        }
}

void Login::on_btn_clear2_clicked()
{
    ui->txt_age->setText("");
    ui->txt_email->setText("");
    ui->txt_name->setText("");
    ui->txt_username->setText("");
    ui->txt_pass->setText("");
}




void Login::on_Show_pass_stateChanged(int arg1)
{
    if(arg1){
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    }else{
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    }
}


void Login::on_btn_home_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}
void Login::showpoint(){
    double point = ui->lbl_currentpoint_2->text().toDouble();

    if(point >= 0 && point <1500){
        ui->lbl_level_2->setText("MEMBER");
        ui->lbl_discount_2->setText("3%");
    }else if(point >= 1500 && point <6000){
        ui->lbl_level_2->setText("VIP");
        ui->lbl_discount_2->setText("6%");
    }else if(point >= 6000){
        ui->lbl_level_2->setText("VVIP");
        ui->lbl_discount_2->setText("10%");
    }
}
void Login::showinfo(){
    QString  username;
    username = ui->lineEdit->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from login where UserName='"+username+"'");
    if(qry.exec())
    {
       while(qry.next()){
           ui->txt_username_2->setText(qry.value(0).toString());
           ui->txt_pass_2->setText(qry.value(1).toString());
           ui->txt_name_2->setText(qry.value(2).toString());
           ui->txt_age_2->setText(qry.value(3).toString());
           ui->txt_email_2->setText(qry.value(4).toString());
           ui->txt_phone_2->setText(qry.value(6).toString());
           ui->lbl_username_4->setText(qry.value(0).toString());
           ui->lbl_name_4->setText(qry.value(2).toString());
           ui->label_name->setText(qry.value(2).toString());
           ui->lbl_phone_4->setText(qry.value(6).toString());
           ui->lbl_email_4->setText(qry.value(4).toString());
           ui->lbl_budget_3->setText(qry.value(7).toString());
           ui->lbl_point_2->setText(qry.value(8).toString());
           ui->lbl_currentpoint_2->setText(qry.value(8).toString());
           showpoint();


       }
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}
void Login::updatepoint(){
    QString  UserName,point;
    UserName = ui->txt_username_2->text();
    point = ui->lbl_point_2->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("update login set point='"+point+"' where UserName='"+UserName+"'");

    if(qry.exec())
    {
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}
void Login::on_btn_save_2_clicked()
{
    QString Name, Age, Email, UserName, Pass, Phone;
    Name = ui->txt_name_2->text();
    Age = ui->txt_age_2->text();
    Email = ui->txt_email_2->text();
    UserName = ui->txt_username_2->text();
    Pass = ui->txt_pass_2->text();
    Phone = ui->txt_phone_2->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("update login set UserName='"+UserName+"',Password='"+Pass+"',name='"+Name+"',age='"+Age+"',email='"+Email+"',phone='"+Phone+"' where UserName='"+UserName+"'");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Edit"),tr("Updated"));
       showinfo();
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}

void Login::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    showcombobox();
}
void Login::clearbook(){
    ui->comboBox_2->clear();
    ui->lbl_type_2->clear();
    ui->lbl_price_2->clear();
    ui->txt_tickets->clear();
    ui->lbl_total->clear();
    ui->lbl_start_2->clear();
    ui->lbl_end_2->clear();
    ui->lbl_seat->clear();
}
void Login::on_btn_reg_2_clicked()
{
    clearbook();
    ui->stackedWidget->setCurrentIndex(3);
    ui->tabWidget->setCurrentIndex(0);
}

void Login::on_tableView_clicked(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();   
    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from login where UserName='"+val+"'");

    if(qry.exec())
    {
       while(qry.next()){
           ui->txt_username_5->setText(qry.value(0).toString());
           ui->txt_pass_5->setText(qry.value(1).toString());
           ui->txt_name_5->setText(qry.value(2).toString());
           ui->txt_age_5->setText(qry.value(3).toString());
           ui->txt_email_5->setText(qry.value(4).toString());
           ui->txt_phone_5->setText(qry.value(6).toString());
           ui->txt_budget_2->setText(qry.value(7).toString());
       }
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}


void Login::on_btn_update_clicked()
{
    QString Name, Age, Email, UserName, Pass, Phone,Budget;
    Name = ui->txt_name_5->text();
    Age = ui->txt_age_5->text();
    Email = ui->txt_email_5->text();
    UserName = ui->txt_username_5->text();
    Pass = ui->txt_pass_5->text();
    Phone = ui->txt_phone_5->text();
    Budget = ui->txt_budget_2->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("update login set UserName='"+UserName+"',Password='"+Pass+"',name='"+Name+"',age='"+Age+"',email='"+Email+"',phone='"+Phone+"',budget='"+Budget+"' where UserName='"+UserName+"'");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Edit"),tr("Updated"));
       showtable();
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}


void Login::on_btn_delete_clicked()
{
    QString Name, Age, Email, UserName, Pass, Phone,Budget;
    Name = ui->txt_name_5->text();
    Age = ui->txt_age_5->text();
    Email = ui->txt_email_5->text();
    UserName = ui->txt_username_5->text();
    Pass = ui->txt_pass_5->text();
    Phone = ui->txt_phone_5->text();
    Budget = ui->txt_budget_2->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("delete from login where UserName='"+UserName+"'");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Deleted"));
       showtable();
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}
void Login::on_btn_add_clicked()
{
    QString Name, Age, Email, UserName, Pass, Phone,Budget;
    Name = ui->txt_name_5->text();
    Age = ui->txt_age_5->text();
    Email = ui->txt_email_5->text();
    UserName = ui->txt_username_5->text();
    Pass = ui->txt_pass_5->text();
    Phone = ui->txt_phone_5->text();
    Budget = ui->txt_budget_2->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();

    QSqlQuery qry;
    qry.prepare("insert into login(UserName,Password,name,age,email,phone,budget) values ('"+UserName+"','"+Pass+"','"+Name+"','"+Age+"','"+Email+"','"+Phone+"','"+Budget+"')");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Save"),tr("Saved"));
       connClose();
       showtable();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}
void Login::on_btn_clear_3_clicked()
{
    clear();
}

void Login::on_btn_home_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
}

void Login::on_btn_seat_clicked()
{
    QString Movies = ui->comboBox_2->currentText();
    if(Movies == "Spider-Man No way home"){
        updateUI();
    }else if(Movies == "Medium"){
        updateUI_2();
    }else if(Movies == "End Game"){
        updateUI_3();
    }
    ui->stackedWidget->setCurrentIndex(5);
}


void Login::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Login::updateUI()
{
    qDebug() << "in updateUI()";

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QString Movies = ui->comboBox_2->currentText();
    QString seats = "";
    if(Movies == "Spider-Man No way home"){
    query.prepare("select Seat,Available from movie_ticket_booking");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
    }
    while(query.next())
    {
        QString sLabel = "lbl" + query.value(0).toString();
        QLabel * ptr = this->findChild<QLabel*>(sLabel);
        if(ptr!=nullptr)
        {
            if(query.value(1).toString().compare("N") == 0)
            {               
                QPixmap pm(":/img/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
            }else if(query.value(1).toString().compare("K") == 0)
            {
                QPixmap pm(":/img/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                seats.append(query.value(0).toString());
                ui->lbl_seat->setText(seats);
            }
            else
            {
                QPixmap pm(":/img/img/available.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                //qDebug()<<query.value(0).toString() << " : is Available";
            }
        }
        }
    }

}
void Login::updateUI_2(){
    qDebug() << "in updateUI_2()";

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QString Movies = ui->comboBox_2->currentText();
    QString seats = "";
    if(Movies == "Medium"){
    query.prepare("select Seat,Available1 from movie_ticket_booking");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
    }
    while(query.next())
    {
        QString sLabel = "lbl" + query.value(0).toString();
        QLabel * ptr = this->findChild<QLabel*>(sLabel);
        if(ptr!=nullptr)
        {
            if(query.value(1).toString().compare("N") == 0)
            {
                QPixmap pm(":/img/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
            }else if(query.value(1).toString().compare("K") == 0)
            {
                QPixmap pm(":/img/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                seats.append(query.value(0).toString());
                ui->lbl_seat->setText(seats);
            }
            else
            {
                QPixmap pm(":/img/img/available.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                //qDebug()<<query.value(0).toString() << " : is Available";
            }
        }
    }
    }
}
void Login::updateUI_3(){
    qDebug() << "in updateUI_3()";

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QString Movies = ui->comboBox_2->currentText();
    QString seats = "";
    if(Movies == "End Game"){
    query.prepare("select Seat, Available2 from movie_ticket_booking");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
    }
    while(query.next())
    {
        QString sLabel = "lbl" + query.value(0).toString();
        QLabel * ptr = this->findChild<QLabel*>(sLabel);
        if(ptr!=nullptr)
        {
            if(query.value(1).toString().compare("N") == 0)
            {
                QPixmap pm(":/img/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
            }else if(query.value(1).toString().compare("K") == 0)
            {
                QPixmap pm(":/img/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                seats.append(query.value(0).toString());
                ui->lbl_seat->setText(seats);
            }
            else
            {
                QPixmap pm(":/img/img/available.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                //qDebug()<<query.value(0).toString() << " : is Available";
            }

        }
    }
    }
}
void Login::seatchange(){
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("update movie_ticket_booking set Available = 'N' where Available = 'K' ");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
    }
    else{
        if(query.numRowsAffected() > 0)
        {
            qDebug() << "Update was successful. "<< query.lastQuery();
        }
        else
        {
            qDebug() << "Update Failed. "<< query.lastQuery();
        }

    }
    updateUI();
}
void Login::seatchange2(){
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("update movie_ticket_booking set Available1 = 'N' where Available1 = 'K' ");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
    }
    else{
        if(query.numRowsAffected() > 0)
        {
            qDebug() << "Update was successful. "<< query.lastQuery();
        }
        else
        {
            qDebug() << "Update Failed. "<< query.lastQuery();
        }

    }
    updateUI_2();
}
void Login::seatchange3(){
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("update movie_ticket_booking set Available2 = 'N' where Available2 = 'K' ");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
    }
    else{
        if(query.numRowsAffected() > 0)
        {
            qDebug() << "Update was successful. "<< query.lastQuery();
        }
        else
        {
            qDebug() << "Update Failed. "<< query.lastQuery();
        }

    }
    updateUI_3();
}
void Login::bookseats(){
    QString Movies = ui->comboBox_2->currentText();
    if(Movies == "Spider-Man No way home"){
        seatchange();
    }else if(Movies == "Medium"){
        seatchange2();
    }else if(Movies == "End Game"){
        seatchange3();
    }
}
void Login::on_btnBook_clicked()
{  
    QString Movies = ui->comboBox_2->currentText();
    if(Movies == "Spider-Man No way home"){
        ptrBook->Flag = 0;
        ptrBook->updateUI();
        ptrBook->show();
    }else if(Movies == "Medium"){
        ptrBook->Flag = 1;
        ptrBook->updateUI_2();
        ptrBook->show();
    }else if(Movies == "End Game"){
        ptrBook->Flag = 2;
        ptrBook->updateUI_3();
        ptrBook->show();
    }
}

void Login::on_btnCancel_clicked()
{
    QString Movies = ui->comboBox_2->currentText();
    if(Movies == "Spider-Man No way home"){
        ptrCancel->Flag = 0;
        ptrCancel->updateUI();
        ptrCancel->show();
    }else if(Movies == "Medium"){
        ptrCancel->Flag = 1;
        ptrCancel->updateUI_2();
        ptrCancel->show();
    }else if(Movies == "End Game"){
        ptrCancel->Flag = 2;
        ptrCancel->updateUI_3();
        ptrCancel->show();
    }
}


void Login::on_btnReset_clicked()
{
    QString Movies = ui->txt_name_3->text();
    if(Movies == "Spider-Man No way home"){
        QSqlQuery query(MyDB::getInstance()->getDBInstance());
        query.prepare("update movie_ticket_booking set Available = 'Y'");

        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
            //ui->lblInfo->setText(query.lastError().text());
        }
        else{
            if(query.numRowsAffected() > 0)
            {
                qDebug() << "Update was successful. "<< query.lastQuery();
                QMessageBox::information(this,tr("Show"),tr("Show ended"));
            }
            else
            {
                qDebug() << "Update Failed. "<< query.lastQuery();
            }
        }
        updateUI();
    }else if(Movies == "Medium"){
        QSqlQuery query(MyDB::getInstance()->getDBInstance());
        query.prepare("update movie_ticket_booking set Available1 = 'Y'");

        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
        }
        else{
            if(query.numRowsAffected() > 0)
            {
                qDebug() << "Update was successful. "<< query.lastQuery();
                QMessageBox::information(this,tr("Show"),tr("Show ended"));
            }
            else
            {
                qDebug() << "Update Failed. "<< query.lastQuery();
            }
        }
        updateUI_2();
    }else if(Movies == "End Game"){
        QSqlQuery query(MyDB::getInstance()->getDBInstance());
        query.prepare("update movie_ticket_booking set Available2 = 'Y'");

        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
        }
        else{
            if(query.numRowsAffected() > 0)
            {
                qDebug() << "Update was successful. "<< query.lastQuery();
                QMessageBox::information(this,tr("Show"),tr("Show ended"));
            }
            else
            {
                qDebug() << "Update Failed. "<< query.lastQuery();
            }
        }
        updateUI_3();
    }

}

void Login::on_btn_save_3_clicked()
{
    int Allmoney = ui->lbl_budget_3->text().toInt();
    int money = ui->txt_budget->text().toInt();
    if(money > 0)
    {
        Allmoney += money;
        ui->lbl_budget_3->setText(QString::number(Allmoney));
        ui->txt_budget->clear();
        QString UserName, Budget;
        UserName = ui->txt_username_2->text();
        Budget = ui->lbl_budget_3->text();

        if(!connOpen()){
            qDebug() <<"No connection to db";
            return;
        }
        connOpen();
        QSqlQuery qry;

        qry.prepare("update login set UserName='"+UserName+"',budget='"+Budget+"' where UserName='"+UserName+"'");

        if(qry.exec())
        {
           QMessageBox::information(this,tr("Add"),tr("Added"));
           showinfo();
           connClose();
         }
        else{
            QMessageBox::critical(this,tr("error"),qry.lastError().text());
        }

    }else{
        QMessageBox::critical(this,tr("error"),tr("Not add"));
        ui->txt_budget->clear();
    }
}

void Login::totalmoney(){
    int Totalprice = ui->lbl_totalprice->text().toInt();
    int price = ui->lbl_price_2->text().toInt();
    int ticket = ui->txt_tickets->text().toInt();
    int Totalmoney = ui->lbl_total->text().toInt();
    QString discount =ui->lbl_discount_2->text();
    if(discount == "3%"){
        ui->lbl_discount_2->setText("0.03");
    }else if(discount == "6%"){
        ui->lbl_discount_2->setText("0.06");
    }else if(discount == "10%"){
        ui->lbl_discount_2->setText("0.1");
    }
    double discount_0 =ui->lbl_discount_2->text().toDouble();

    if(price > 0)
    {
        Totalprice = price * ticket ;
        Totalmoney = Totalprice - price * ticket * discount_0;
        ui->lbl_totalprice->setText(QString::number(Totalprice));
        ui->lbl_total->setText(QString::number(Totalmoney));
    }
}
void Login::on_comboBox_2_textActivated(const QString &arg1)
{
    QString Namemovies = ui->comboBox_2->currentText();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Movies where Name='"+Namemovies+"'");

    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lbl_type_2->setText(qry.value(1).toString());
            ui->lbl_price_2->setText(qry.value(2).toString());
            ui->lbl_start_2->setText(qry.value(3).toString());
            ui->lbl_end_2->setText(qry.value(4).toString());
            QString discount = ui->lbl_discount_2->text();
            ui->lbl_Discount->setText(discount);
        }
        connClose();
     }else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}


void Login::on_txt_tickets_textChanged(const QString &arg1)
{
    totalmoney();
}

void Login::history(){
    QDateTime datetime=QDateTime::currentDateTime();
    QString datetimetext=datetime.toString();
    QString UserName, Movies, Ticket,Price,End,Seat;
    UserName = ui->txt_username_2->text();
    Movies = ui->comboBox_2->currentText();
    Ticket = ui->txt_tickets->text();
    Price = ui->lbl_total->text();
    End = ui->lbl_end_2->text();
    Seat = ui->lbl_seat->text();
    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("insert into history(UserName,Movies,DateTime,Tickets,price,End,Seats) values ('"+UserName+"','"+Movies+"','"+datetimetext+"','"+Ticket+"','"+Price+"','"+End+"','"+Seat+"')");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Book"),tr("Booked"));
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}
void Login::history1(){
    QString UserName,DateTime,Static;
    UserName = ui->txt_username_2->text();
    DateTime = ui->lbl_Date->text();

    Static = "Cancel";
    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("update history set Static='"+Static+"' where DateTime='"+DateTime+"'");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Cancel"),tr("Cancel"));
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }

}
void Login::history2(){
    QTime time=QTime::currentTime();
    QString timetext=time.toString();
    QString UserName,DateTime,Static,End;
    UserName = ui->txt_username_2->text();
    DateTime = ui->lbl_Date->text();
    End = ui->lbl_end_4->text();
    Static = ui->lbl_Static->text();
    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }

    if(Static == "Done" or Static == "Cancel"){
        return;
    }
    Static = "in process";
    if(timetext > End){
        Static = "Done";
    }

    connOpen();
    QSqlQuery qry;

    qry.prepare("update history set Static='"+Static+"' where DateTime='"+DateTime+"'");

    if(qry.exec())
    {
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }


}
void Login::on_btn_book_clicked()
{

    double budget = ui->lbl_budget_3->text().toDouble();
    double Total = ui->lbl_total->text().toDouble();
    double point =ui->lbl_point_2->text().toDouble();
    if(Total > 0)
    {
        if(budget >= Total){
        budget = budget - Total;
        ui->lbl_budget_3->setText(QString::number(budget));
        Total = Total/1000;
        point += Total;
        ui->lbl_point_2->setText(QString::number(point));
        ui->stackedWidget->setCurrentIndex(3);
        }else{
            QMessageBox::information(this,tr("Book"),tr("not enough money"));
            return;
        }
        QString UserName, Budget,Point;
        UserName = ui->txt_username_2->text();
        Budget = ui->lbl_budget_3->text();
        Point = ui->lbl_point_2->text();
        ui->stackedWidget->setCurrentIndex(3);
        if(!connOpen()){
            qDebug() <<"No connection to db";
            return;
        }
        connOpen();
        QSqlQuery qry;

        qry.prepare("update login set UserName='"+UserName+"',budget='"+Budget+"',point='"+Point+"' where UserName='"+UserName+"'");

        if(qry.exec())
        {
           bookseats();
           ui->tabWidget->setCurrentIndex(0);
           history();
           showinfo();
           clearbook();
           connClose();
         }
        else{
            QMessageBox::critical(this,tr("error"),qry.lastError().text());
        }

    }else{
        QMessageBox::critical(this,tr("error"),tr("Not Book"));
        ui->txt_budget->clear();
    }
}

void Login::on_tabWidget_tabBarClicked(int index)
{
    history2();
    showhistory1();
}


void Login::on_tableView_2_clicked(const QModelIndex &index)
{
    QString val=ui->tableView_2->model()->data(index).toString();
    QString Static =ui->lbl_Static->text();
    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from history where DateTime='"+val+"'");

    if(qry.exec())
    {
       while(qry.next()){

           showhistory1();
           ui->lbl_Movies->setText(qry.value(1).toString());
           ui->lbl_Date->setText(qry.value(2).toString());
           ui->lbl_Tickets->setText(qry.value(3).toString());
           ui->lbl_Price->setText(qry.value(4).toString());
           ui->lbl_Static->setText(qry.value(5).toString());
           ui->lbl_end_4->setText(qry.value(6).toString());
           ui->lbl_Seat->setText(qry.value(7).toString());
           history2();

       }
       connClose();
    }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}


void Login::on_btn_cancel_clicked()
{
    QString Static = ui ->lbl_Static->text();
    if(Static == "in process"){
        int money = ui->lbl_Price->text().toInt();
        int budget = ui->lbl_budget_3->text().toInt();
        double point = ui->lbl_point_2->text().toDouble();
        budget += (money/2);
        point = point - (money/2000);
        ui->lbl_budget_3->setText(QString::number(budget));
        ui->lbl_point_2->setText(QString::number(point));
        QString UserName, Budget,Point;
        UserName = ui->txt_username_2->text();
        Budget = ui->lbl_budget_3->text();
        Point = ui->lbl_point_2->text();
        if(!connOpen()){
            qDebug() <<"No connection to db";
            return;
        }
        connOpen();
        QSqlQuery qry;

        qry.prepare("update login set UserName='"+UserName+"',budget='"+Budget+"',point='"+Point+"' where UserName='"+UserName+"'");

        if(qry.exec())
        {
           history1();
           showinfo();
           connClose();
         }
        else{
            QMessageBox::critical(this,tr("error"),qry.lastError().text());
        }

    }else{
        QMessageBox::critical(this,tr("Static"),tr("Movies is Done"));
        return;
    }
}


void Login::on_pushButton_5_clicked()
{
    QMessageBox::information(this,tr("Cancel"),tr("Hủy vé chỉ được hoàn lại 50% tiền đặt"));
}



void Login::on_btn_clear_2_clicked()
{
    ui->lbl_type_2->clear();
    ui->lbl_price_2->clear();
    ui->txt_tickets->clear();
    ui->lbl_total->clear();
    ui->lbl_start_2->clear();
    ui->lbl_end_2->clear();
    ui->lbl_seat->clear();
}

void Login::on_btn_point_clicked()
{
    QFile file("D:\\Qttest\\Book ticket\\BookTicket\\Point.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);

    ui->textBrowser_3->setText(in.readAll());
}




void Login::on_tableView_3_clicked(const QModelIndex &index)
{
    QString val=ui->tableView_3->model()->data(index).toString();
    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Movies where Name='"+val+"'");

    if(qry.exec())
    {
       while(qry.next()){
           ui->txt_name_3->setText(qry.value(0).toString());
           ui->txt_type->setText(qry.value(1).toString());
           ui->txt_price->setText(qry.value(2).toString());
           ui->txt_start->setText(qry.value(3).toString());
           ui->txt_end->setText(qry.value(4).toString());
       }
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}


void Login::on_tableView_4_clicked(const QModelIndex &index)
{
    QString val=ui->tableView_4->model()->data(index).toString();
    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from history where DateTime='"+val+"'");

    if(qry.exec())
    {
       while(qry.next()){
           ui->txt_username_3->setText(qry.value(0).toString());
           ui->txt_movies->setText(qry.value(1).toString());
           ui->txt_datetime->setText(qry.value(2).toString());
           ui->txt_ticket->setText(qry.value(3).toString());
           ui->txt_price_2->setText(qry.value(4).toString());
           ui->txt_static->setText(qry.value(5).toString());
           ui->txt_end_2->setText(qry.value(6).toString());
           ui->txt_seat->setText(qry.value(7).toString());
       }
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}
void Login::clear(){
    ui->txt_username_3->clear();
    ui->txt_movies->clear();
    ui->txt_datetime->clear();
    ui->txt_ticket->clear();
    ui->txt_price_2->clear();
    ui->txt_static->clear();
    ui->txt_end_2->clear();
    ui->txt_seat->clear();
    ui->txt_name_5->clear();
    ui->txt_age_5->clear();
    ui->txt_email_5->clear();
    ui->txt_username_5->clear();
    ui->txt_pass_5->clear();
    ui->txt_phone_5->clear();
    ui->txt_budget_2->clear();
    ui->txt_name_3->clear();
    ui->txt_type->clear();
    ui->txt_price->clear();
    ui->txt_start->clear();
    ui->txt_end->clear();
}


void Login::on_btn_update_2_clicked()
{
    QString Name, Type, Price, Start,End;
    Name = ui->txt_name_3->text();
    Type = ui->txt_type->text();
    Price = ui->txt_price->text();
    Start = ui->txt_start->text();
    End = ui->txt_end->text();
    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("update Movies set Name='"+Name+"',Type='"+Type+"',Price='"+Price+"',Start='"+Start+"',End='"+End+"'where Name='"+Name+"'");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Edit"),tr("Updated"));
       showmovies();
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}


void Login::on_btn_delete_2_clicked()
{
    QString Name, Type, Price, Start,End;
    Name = ui->txt_name_3->text();
    Type = ui->txt_type->text();
    Price = ui->txt_price->text();
    Start = ui->txt_start->text();
    End = ui->txt_end->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();
    QSqlQuery qry;

    qry.prepare("delete from Movies where Name='"+Name+"'");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Delete"),tr("Deleted"));
       showmovies();
       connClose();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}


void Login::on_btn_add_2_clicked()
{
    QString Name, Type, Price, Start,End;
    Name = ui->txt_name_3->text();
    Type = ui->txt_type->text();
    Price = ui->txt_price->text();
    Start = ui->txt_start->text();
    End = ui->txt_end->text();

    if(!connOpen()){
        qDebug() <<"No connection to db";
        return;
    }
    connOpen();

    QSqlQuery qry;
    qry.prepare("insert into Movies(Name,Type,Price,Start,End) values ('"+Name+"','"+Type+"','"+Price+"','"+Start+"','"+End+"')");

    if(qry.exec())
    {
       QMessageBox::information(this,tr("Save"),tr("Saved"));
       connClose();
       showmovies();
     }
    else{
        QMessageBox::critical(this,tr("error"),qry.lastError().text());
    }
}

