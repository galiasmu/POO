#include "formulario.h"
#include <QDebug>
#include<ctime>
#include<stdlib.h>
#include<time.h>

Formulario::Formulario( QWidget * parent ) : QWidget( parent ) {

    this->setWindowTitle( "Formulario" );

    llegajo = new QLabel( "Legajo" );
    lnombre = new QLabel( "Nombre" );
    lapellido = new QLabel( "Apellido" );

    leLegajo = new QLineEdit(  );
    leLegajo->setPlaceholderText("Ingrese legajo");
    leNombre = new QLineEdit(  );
    leNombre->setPlaceholderText( "Ingrese Nombre" );
    leApellido = new QLineEdit( );
    leApellido->setPlaceholderText( "Ingrese Apellido" );

    alta = new QPushButton( "ALTA" );

    grilla = new QGridLayout (  );

    grilla->addWidget(llegajo,0,0);
    grilla->addWidget(lnombre,1,0);
    grilla->addWidget(lapellido,2,0);

    grilla->addWidget(leLegajo,0,1,1,3);
    grilla->addWidget(leNombre,1,1,1,3);
    grilla->addWidget(leApellido,2,1,1,3);

    grilla->addWidget(alta,3,3);

    captcha = new QGroupBox("Captcha");
    srand(time(NULL));
    int num=444+rand()%(999 - 444);
    QString aString = QString::number(num);
    lCodigo = new QLabel(aString);

    leCodigo = new QLineEdit();
    captchaGrilla = new QGridLayout();

    captchaGrilla->addWidget(lCodigo,0,0);
    captchaGrilla->addWidget(leCodigo,1,0);
    captcha->setLayout(captchaGrilla);

    grilla->addWidget(captcha,3,0);

    this->setLayout(grilla);

    connect(alta, SIGNAL(pressed()), this, SLOT(validarCaptcha()));
    connect(leCodigo, SIGNAL(returnPressed()), this, SLOT(validarCaptcha()));
}

void Formulario::validarCaptcha(){
    if(this->leCodigo->text() == lCodigo->text() ){
        qDebug() << "Alta del usuario " << this->leLegajo->text() << "generada con exito!";
        this->close();
    }else {
        qDebug() << "Codigo Incorrecto, intente nuevamente.";
        this->leCodigo->clear();
    }
}
