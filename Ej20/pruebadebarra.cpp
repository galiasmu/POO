#include "pruebadebarra.h"
#include "ui_pruebadebarra.h"

PruebaDeBarra::PruebaDeBarra(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PruebaDeBarra)
{
    ui->setupUi(this);

    ui->barra->setValor( 50 );
}

PruebaDeBarra::~PruebaDeBarra()
{
    delete ui;
}
