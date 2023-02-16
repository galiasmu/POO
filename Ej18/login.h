#ifndef LOGIN_H
#define LOGIN_H
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLayout>
#include "ventana.h"

class Login : public QWidget {
    Q_OBJECT // agrega varias posibilidades de manejo de eventos

public:
    Login();
    ~Login();
private:
    QLabel * lUsuario;
    QLabel * lClave;
    QLineEdit * leUsuario;
    QLineEdit * leClave;
    QPushButton * pb;

    QGridLayout * layout;
    int fail;
    Ventana * v;

private slots:
    void slot_validar();
};

#endif // LOGIN_H
