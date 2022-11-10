#include "why_become_donor.h"
#include "ui_why_become_donor.h"
#include "mainwindow.h"
#include "about.h"
#include "log_in.h"
#include "create_account.h"

why_become_donor::why_become_donor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::why_become_donor)
{
    ui->setupUi(this);
}

why_become_donor::~why_become_donor()
{
    delete ui;
}

void why_become_donor::on_about_2_clicked()
{
    about ab;
    ab.setModal(true);
    hide();
    ab.exec();
}


void why_become_donor::on_login_clicked()
{
    log_in l1;
    l1.setModal(true);
    hide();
    l1.exec();
}


void why_become_donor::on_register_2_clicked()
{
    create_account ca;
    ca.setModal(true);
    hide();
    ca.exec();
}


void why_become_donor::on_home_clicked()
{
    this->close();
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

