#include "login.h"
#include <QMessageBox>

#include <QStringList>

Login::Login() : lUsuario(new QLabel("Usuario")),
                 lClave(new QLabel("Clave")),
                 leUsuario(new QLineEdit),
                 leClave(new QLineEdit),
                 pb(new QPushButton("Validar")),
                 layout(new QGridLayout)
{

    layout->addWidget(lUsuario,    0, 0, 1, 1);
    layout->addWidget(lClave,      1, 0, 1, 1);
    layout->addWidget(leUsuario,   0, 1, 1, 2);
    layout->addWidget(leClave,     1, 1, 1, 2);
    layout->addWidget(pb,          2, 2, 1, 1);


    leClave->setEchoMode(QLineEdit::Password);

    this->setLayout(layout);

    connect(leClave, SIGNAL(returnPressed()), this, SLOT(slot_validarUsuario()));
    connect(pb, SIGNAL(pressed()), this, SLOT(slot_validar()));

}

Login::~Login()  {
    delete lUsuario;
    delete lClave;
    delete leUsuario;
    delete leClave;
    delete pb;
    delete layout;
}

void Login::slot_validarUsuario()
{
    if (leUsuario->text() == "admin" && leClave->text() == "admin") {
        this->close();
    }
    else {
        qDebug() << "Usuario invalido, vuelva a intentar";
    }
}
