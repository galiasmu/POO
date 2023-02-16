#ifndef PRUEBADEBARRA_H
#define PRUEBADEBARRA_H

#include <QWidget>

namespace Ui {
class PruebaDeBarra;
}

class PruebaDeBarra : public QWidget
{
    Q_OBJECT

public:
    explicit PruebaDeBarra(QWidget *parent = nullptr);
    ~PruebaDeBarra();

private:
    Ui::PruebaDeBarra *ui;
};

#endif // PRUEBADEBARRA_H
