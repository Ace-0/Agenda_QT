#ifndef LOGINWINDOW_HPP
#define LOGINWINDOW_HPP

#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QLabel>
#include <QCloseEvent>
#include "AgendaService.hpp"
#include "global.hpp"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private:
    Ui::LoginWindow *ui;
    AgendaService agendaService;
    void clearLines();

private slots:
    void on_quitBtn_clicked();

    void on_loginBtn_clicked();

    void on_registerBtn_clicked();

    void closeEvent(QCloseEvent *event);

    void receiveLogout();

    void receiveRegisterDone();

signals:
    void sendLogin();

    void sendRegister();

};



#endif // LOGINWINDOW_HPP
