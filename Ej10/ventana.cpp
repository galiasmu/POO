#include "ventana.h"
#include "ui_ventana.h"
#include <QPainter>
#include <QDebug>
#include <QResizeEvent>
#include <QImage>

Ventana::Ventana(QWidget *parent) : QWidget(parent)
                                  , ui(new Ui::Ventana)

{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::paintEvent(QPaintEvent *){

  QPainter painter(this);
  painter.drawImage(0, 0, this->imageOriginal);

}

void Ventana::resizeEvent(QResizeEvent *e){

  qDebug()<< "resizeEvent" << e->size() << " - Antes " << e->oldSize();

  this-> imageEscalada = this-> imageOriginal.scaled( this->width(), this->height());

  this->repaint();
}
