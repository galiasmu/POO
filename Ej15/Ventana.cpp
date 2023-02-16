#include "Ventana.h"
#include <QDebug>
#include <QPainter>
#include <QImage>

Ventana :: Ventana ( QWidget * parent) : QWidget (parent){

    this->setWindowTitle("Ventana");
    im.load("/media/gali/Ubuntu/POO/Ejs-Entrega/Ej15/recursos/Google-Chrome-Logo.png");

}

void Ventana :: paintEvent(QPaintEvent * ){
     QPainter lapiz (this);
     lapiz.drawImage(this->width()/2 - im.width()/2,this->height()/2 - im.height()/2,im) ;

 }
