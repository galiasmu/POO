#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>

class Formulario : public QWidget {
    Q_OBJECT
public:

    Formulario( QWidget * parent = nullptr);

private:

    QLabel *llegajo;
    QLabel *lnombre;
    QLabel *lapellido;
    QLineEdit * leLegajo;
    QLineEdit * leNombre;
    QLineEdit * leApellido;
    QGridLayout *grilla;
    QPushButton * alta;

    QLabel * lCodigo;
    QLineEdit * leCodigo;
    QGroupBox * captcha;
    QGridLayout * captchaGrilla;

private slots:
    void validarCaptcha();

};
#endif // FORMULARIO_H
