#include "login.h"
#include <QDebug>
Login::Login() : lUsuario(new QLabel(" Usuario ")),
                 lClave(new QLabel( " Clave ")),
                 leUsuario(new QLineEdit),
                 leClave(new QLineEdit),
                 pb(new QPushButton(" Validar ")),
                 layout(new QGridLayout),
                 v(new Ventana)
{

    //     Col 0        Col1        Col2
    //## Usuario #############                  ## - #Fila 0
    //## Clave #############                    ## - Fila 1
    //################# Validar ################## - Fila 2
    //############################################ - Fila 3
    layout -> addWidget(lUsuario, 0, 0, 1, 1);
    layout -> addWidget(lClave, 1, 0, 1, 1);
    layout -> addWidget(leUsuario, 0, 1, 1, 2);
    layout -> addWidget(leClave, 1, 1, 1, 2);
    layout -> addWidget(pb, 2, 1, 1, 1);


    leClave->setEchoMode(QLineEdit::Password);

    this -> setLayout(layout);

    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));
    fail = 0;
}

Login::~Login() {
    delete lUsuario;
    delete lClave;
    delete leUsuario;
    delete leClave;
    delete pb;
    delete layout;

}

void Login::slot_validar() {
    if (leUsuario->text() == "378" && leClave->text() == "1234") {
        qDebug() << "Usuario validado";
        this -> close(); 
        v->show();
    }
    else {
        if (fail == 2) {
            this -> close();
        }
        fail++;
        qDebug() << "usuario no valido";
        //leUsuario ->clear();
        leClave -> clear();
        qDebug() << "No tiene una cuenta? registrese a continuacion:";

    }
}


