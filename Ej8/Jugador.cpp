#include <QApplication>
#include <QDebug>
#include <QVector>
#include <QString>

class Jugador{
private:
    int velocidad;
    int fuerza;
    QString nombre;



public:

    Jugador(): velocidad(0), fuerza(0), nombre("Sin nombre"){}
    Jugador(int veloc, int fuerz, QString nombr): velocidad(veloc), fuerza(fuerz), nombre(nombr){}
    ~Jugador(){
        this->velocidad = 0;
        this->fuerza = 0;
        this->nombre = "";
    }

    int getVelocidad(){
        return velocidad;
    }

    void setVelocidad(int velocidad){
        this->velocidad = velocidad;
    }

    int getFuerza(){
        return fuerza;
    }

    void setFuerza(int fuerza){
        this->fuerza = fuerza;
    }

    QString getNombre(){
        return nombre;
    }

    void setNombre(QString nombre){
        this->nombre = nombre;
    }
};

int main(int argc, char ** argv){
    QApplication a(argc, argv);

    Jugador j0(12,55,"Juan");
    Jugador j1(56,84,"Roberto");
    Jugador j2(11,25,"Gali");
    Jugador j3(11,22,"Guillermo");
    Jugador j4(48,56,"Elian");
    Jugador j5(66,84,"Jony");
    Jugador j6(23,89,"Agustin");
    Jugador j7(18,23,"Ruben");
    Jugador j8(99,11,"Cesar");
    Jugador j9(69,11,"Carlos");

    QVector< Jugador > vector;

    vector.push_back(j0);
    vector.push_back(j1);
    vector.push_back(j2);
    vector.push_back(j3);
    vector.push_back(j4);
    vector.push_back(j5);
    vector.push_back(j6);
    vector.push_back(j7);
    vector.push_back(j8);
    vector.push_back(j9);

    for(int i = 0; i < vector.size(); i++){
        Jugador jugador = vector.at(i);
        qDebug() << jugador.getNombre() << " -- " << jugador.getFuerza()<<" -- " << jugador.getVelocidad();
    }

    return 0;
}
