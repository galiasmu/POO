#include <iostream>
#include <QObject>
int main(int argc, char** ) {
    /*
     argc es la cantidadd de parametros
     argv es un especie de matriz de chars

    ej: app.exe carlitos
    argv
    | a | p | p | . | e | x | e |
     |c | a | r | l | i | t | o | s |

    argv [0][1] = p
    argv [0] = app.exe
    argv [1] = carlitos
    */
    std::cout << "hola POO" << std::endl;
}
