#ifndef VENTANA_H
#define VENTANA_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Ventana; }
QT_END_NAMESPACE

class Ventana : public QWidget
{
    Q_OBJECT

public:
    Ventana(QWidget *parent = nullptr);
    ~Ventana();

protected:
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *e);

private:
    Ui::Ventana *ui;
    QImage imageOriginal, imageEscalada;
};
#endif // VENTANA_H
