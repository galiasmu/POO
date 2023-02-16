#include <QApplication>
#include <QDebug>
#include <QString>

#include <iostream>

using namespace std;

int main(int argc, char ** argv){
    QApplication a(argc, argv);

    int numero = 12;
    std::string conversor = std::to_string(numero);
    QString qs = conversor.c_str();
    cout << conversor<< endl;
    qDebug() << qs;

    //return a.exec();
    return 0;
}
