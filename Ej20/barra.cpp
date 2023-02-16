#include "barra.h"
#include <QPainter>
#include <QColor>
#include <QDebug>

Barra::Barra( QWidget * parent ) : QWidget( parent ), valor( 0 ) {

}

Barra::~Barra()  {

}

void Barra::setValor( int valor )  {
    this->valor = valor;
    this->repaint();
}

void Barra::paintEvent( QPaintEvent * e )  {
    QPainter painter( this );

    painter.fillRect( 0, 0, this->width(), 2, QColor( 200, 200, 200 ) );

    int porcentaje = float( this->width() ) * float( this->valor ) / float( 100 );

    painter.fillRect( 0, 0, porcentaje, 2, QColor( 10, 10, 200 ) );


}
