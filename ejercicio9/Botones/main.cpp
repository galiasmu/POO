/*
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char ** argv){

  QApplication a(argc, argv);

  QPushButton pb1("Mostrar segundo boton y label");

  QPushButton *pb2 = new QPushButton ("Ocultar label y mostrar boton final");

  QPushButton pb3("Cerrar aplicacion");

  QLabel l("Nuevo label");

  QLineEdit le;

  le.setEchoMode(QLineEdit::Password);   //Contraseña con *******
  //le.setEchoMode(QLineEdit::NoEcho);   //Contraseña sin mostrar que escribe

  qDebug() << "El texto del lineedit es: " << le.text();

  le.show();




 // pb1.show();



  QObject::connect(&pb1, SIGNAL(pressed()), &pb1, SLOT(hide()));

  QObject::connect(&pb1, SIGNAL(pressed()), pb2, SLOT(show()));

  QObject::connect(&pb1, SIGNAL(pressed()), &l, SLOT(show()));

  QObject::connect(pb2, SIGNAL(pressed()), pb2, SLOT(hide()));

  QObject::connect(pb2, SIGNAL(pressed()), &l, SLOT(hide()));

  QObject::connect(pb2, SIGNAL(pressed()), &pb3, SLOT(show()));

  //QObject::connect(&pb3, SIGNAL(pressed()), &a, SLOT(closeAllWindows()));

  QObject::connect(&pb3, SIGNAL(pressed()), &pb3, SLOT(close()));

  QObject::connect(&le, SIGNAL(textChanged(QString)), &le, SLOT(setWindowTitle(QString)));



  return a.exec();
}

*/



#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QPushButton>
#include <QLabel>
/*
int main( int argc, char** argv )  {

    QApplication a( argc, argv );

    QWidget * ventana = new QWidget;  // Es la ventana padre (principal)
    ventana->setWindowTitle( "Volumen" );
    ventana->resize( 300, 50 );

    QSpinBox * spinBox = new QSpinBox;
    QSlider * slider = new QSlider( Qt::Horizontal );
    spinBox->setRange( 0, 100 );
    slider->setRange( 0, 100 );

    QObject::connect( spinBox, SIGNAL( valueChanged( int ) ), slider, SLOT( setValue( int ) ) );
    QObject::connect( slider, SIGNAL( valueChanged( int ) ),  spinBox, SLOT( setValue( int ) ) );
    QObject::connect( spinBox, SIGNAL( textChanged( QString ) ),  ventana, SLOT( setWindowTitle( QString ) ) );

    spinBox->setValue( 15 );

    QHBoxLayout * layout = new QHBoxLayout;
    layout->addWidget( spinBox );
    layout->addWidget( slider );
    ventana->setLayout( layout );
    ventana->setVisible( true );

    return a.exec();
}*/

int main (int argc, char ** argv ){

    QApplication a( argc, argv );
    QPushButton pb1("mostrar segundo boton y label");
    QPushButton * pb2 = new QPushButton("Ocultar label y mostrar boton final");
    QPushButton pb3("Cerrar aplicacion");
    QLabel l("nuevo label");

    pb1.show();

    QObject::connect(&pb1, SIGNAL (pressed()), &pb1, SLOT(hide()));
    QObject::connect(&pb1, SIGNAL (pressed()), pb2, SLOT(show()));
    QObject::connect(&pb1, SIGNAL (pressed()), &l, SLOT(show()));
    QObject::connect(pb2, SIGNAL (pressed()), pb2, SLOT(hide()));
    QObject::connect(pb2, SIGNAL (pressed()), &l, SLOT(hide()));
    QObject::connect(pb2, SIGNAL (pressed()), &pb3, SLOT(show()));
    QObject::connect(&pb3, SIGNAL (pressed()), &a, SLOT(closeAllWindows()));

    return a.exec();

}
