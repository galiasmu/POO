#ifndef VENTANA_H
#define VENTANA_H
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QLayout>

class Ventana : public QWidget {
    Q_OBJECT


public:
    explicit Ventana (QWidget * parent = nullptr);


protected:
    void paintEvent(QPaintEvent * event);

private:
    QImage im;
};


#endif // VENTANA_H
