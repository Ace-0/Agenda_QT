#include "loginwindow.hpp"
#include "mainwindow.hpp"
#include "registerwindow.hpp"
#include <QApplication>
#include <QAnimationDriver>
#include <QPropertyAnimation>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow loginWin;
    MainWindow mainWin;
    RegisterWindow registerWin;

    QPropertyAnimation *animation = new QPropertyAnimation(&loginWin, "windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();
    loginWin.show(); // a simple animation

    QObject::connect(&loginWin, SIGNAL(sendLogin()), &mainWin, SLOT(receiveLogin()));
    QObject::connect(&loginWin, SIGNAL(sendRegister()), &registerWin, SLOT(receiveRegister()));
    QObject::connect(&registerWin, SIGNAL(sendRegisterDone()), &loginWin, SLOT(receiveRegisterDone()));
    QObject::connect(&mainWin, SIGNAL(sendLogout()), &loginWin, SLOT(receiveLogout()));

    return a.exec();
}
