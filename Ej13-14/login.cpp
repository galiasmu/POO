#include "login.h"

Login::Login( QWidget * parent ) : QWidget( parent ) {

    this->setWindowTitle("Login");

    lNombre = new QLabel("Usuario");
    lPassword = new QLabel("Password");

    leNombre =  new QLineEdit();
    leNombre->setPlaceholderText("Ingrese Usuario");
    lePassword = new QLineEdit();
    lePassword->setPlaceholderText("Ingrese Password");
    lePassword->setEchoMode(QLineEdit::Password);

    pbEntrar = new QPushButton("Entrar");

    grilla = new QGridLayout();

    this->setLayout(grilla);

    grilla->addWidget(lNombre,0,0);
    grilla->addWidget(lPassword,1,0);
    grilla->addWidget(leNombre,0,1,1,2);
    grilla->addWidget(lePassword,1,1,1,2);
    grilla->addWidget(pbEntrar,2,3,1,1);

    formulario = new Formulario();

    connect(pbEntrar, SIGNAL(pressed()), this, SLOT(slotValidar()));
    connect(lePassword, SIGNAL(returnPressed()), this, SLOT(slotValidar()));
}

    void Login::slotValidar(){
        if(this->leNombre->text() == "Admin" && this->lePassword->text() == "1111"){
            formulario->show();
            formulario->resize(368,208);
            this->hide();
        }else {

            leNombre->clear();
            lePassword->clear();
        }
    }


