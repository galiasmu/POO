#include <QCoreApplication>
#include <iostream>
using namespace std;

void imprimir (int v[], int cantidad) {
    for (int i=0; i<cantidad; i++) {
        cout << v[i] << endl;
    }
}

template <class T> void imprimir ( T v[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << v[i] << endl;
    }
}


int  main () {
     int v1 [ 5 ] = { 5 , 2 , 4 , 1 , 6 };
    float v2 [ 4 ] = { 2.3 , 5.1 , 0 , 2 };
    int i,pos,aux;
    imprimir(v1, 5);
    for(i=0; i < 5; i++) {
        pos = i;
        aux = v1[i];
        while ((pos>0) && (v1[pos-1] > aux)) {
            v1[pos] = v1[pos-1];\
            pos--;
        }
        v1[pos] = aux;
    }
    std::cout << "Array ordenado : " << std::endl;
    imprimir (v1, 5 );

    //imprimir (v2, 2 );
}
