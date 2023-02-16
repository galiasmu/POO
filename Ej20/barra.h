#ifndef BARRA_H
#define BARRA_H

#include <QWidget>

class Barra : public QWidget  {
    Q_OBJECT

public:
    explicit Barra( QWidget * parent = nullptr );
    virtual ~Barra();

    void setValor( int valor );

protected:
    void paintEvent( QPaintEvent * e );

private:
    int valor;
};

#endif // BARRA_H
