#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "editor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pbIngresar_clicked();

private:
    Ui::Login *ui;
    Editor * e;
};
#endif // LOGIN_H
