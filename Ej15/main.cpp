#include <QApplication>
#include "login.h"
#include "Ventana.h"

int main (int arcg, char ** argv) {
    QApplication a( arcg, argv);

    Login Login;
   //login.setVisible( true );
    Login.setWindowTitle(" Login ");
    Login.move(600, 300);
    Login.show();
    //Ventana.show();

    return a.exec();
}
