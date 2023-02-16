#include <QApplication>
#include <QDebug>

template <class T> void ordenamientoInsercion(T v[], int tam);
template <class T> void imprimir ( T v[], int cantidad );

int main(int argc, char ** argv){
    QApplication a(argc, argv);

    int tam = 6;
    float vector2[6] = {2.5, 1.25, 0.93, 7.01, 3, 9.99};

    qDebug() << "Vector: ";
    for(int i=0; i<tam; i++) {
        qDebug() << vector2[i];
    }
    qDebug() << "Vector Ordenado: ";
    ordenamientoInsercion(vector2, 6);
    imprimir(vector2, 6);

    return 0;
}

template <class T> void ordenamientoInsercion(T v[], int tam){
    int i, clave, j;
    for( i = 1; i < tam; i++){
        clave = *(v+i);
        j = i - 1;

        while(j >= 0 && *(v+j) > clave ){
            *(v+j+1) = *(v+j);
            j = j-1;
        }
        *(v+j+1) = clave;
    }

}

template <class T> void imprimir ( T v[], int cantidad )  {
    for ( int i=0 ; i < cantidad ; i++ )
        qDebug() << v[ i ] << " \n";
}
