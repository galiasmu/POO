#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include "formulario.h"

class Login: public QWidget {
  Q_OBJECT

public:
    Login(QWidget *parent = nullptr);

private:
    QLabel *lNombre;
    QLabel * lPassword;

    QLineEdit * leNombre;
    QLineEdit * lePassword;

    QPushButton * pbEntrar;

    QGridLayout * grilla;

    Formulario * formulario;

private slots:
    void slotValidar();

};

#endif // LOGIN_H
