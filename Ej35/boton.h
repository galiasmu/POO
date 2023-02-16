#ifndef BOTON_H
#define BOTON_H

#include <QWidget>
#include <QColor>

namespace Ui {
class Boton;
}

class Boton : public QWidget
{
    Q_OBJECT

public:
    explicit Boton(QWidget *parent = nullptr);
    ~Boton();

    enum Color = {BLANCO, ROJO, AZUL, VERDE };


    void setTexto(QString texto);
    void setColor(Color color);

protected:
    void paintEvent( QPaintEvent * );

private:
    Ui::Boton *ui;
    Color color;
};

#endif // BOTON_H
