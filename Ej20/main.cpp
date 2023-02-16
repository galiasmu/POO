#include "pruebadebarra.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PruebaDeBarra w;
    w.show();
    return a.exec();
}
