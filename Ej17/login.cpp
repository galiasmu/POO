#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) : QWidget(parent)
                              , ui(new Ui::Login),
                                e(new Editor)
{
    ui->setupUi(this);

    ui->leClave->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}


void Login::on_pbIngresar_clicked()
{
    if(ui->leUsuario->text() == "admin" && ui->leClave->text() == "123"){
        this->hide();
        e->show();
    }
    else{
        ui->leClave->clear();
    }
}

