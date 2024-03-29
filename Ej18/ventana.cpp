#include "ventana.h"
#include <QUrl>
#include <QPainter>

Ventana::Ventana( QWidget * parent ) : QWidget( parent ),
                                       manager( new QNetworkAccessManager( this ) )
{
    connect( manager, SIGNAL( finished( QNetworkReply * ) ),
             this, SLOT( slot_descargaFinalizada( QNetworkReply * ) ) );

    QUrl url( "https://www.ubp.edu.ar/wp-content/themes/ubp-pmkt/img/logo-ubp.png" );
    QNetworkRequest request( url );
    request.setRawHeader( "User-Agent", "MiNavegador 1.0" );
    request.setRawHeader( "Nombre", "ImagenInternet" );

    manager->get( request );

}

void Ventana::paintEvent( QPaintEvent * )  {
    QPainter painter( this );
    painter.drawImage( 0, 0, this->image );
}

void Ventana::slot_descargaFinalizada( QNetworkReply * reply )  {
    image = QImage::fromData( reply->readAll() );
    this->repaint();
}
