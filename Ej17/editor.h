#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>

namespace Ui {
class Editor;
}

class Editor : public QWidget
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

private:
    Ui::Editor *ui;

private slots:
    void on_pbBuscar_clicked();
};



#endif // EDITOR_H
