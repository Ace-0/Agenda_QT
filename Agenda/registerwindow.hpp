#ifndef REGISTERWINDOW_HPP
#define REGISTERWINDOW_HPP

#include <QMainWindow>
#include <QMessageBox>
#include "agendaservice.hpp"

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = 0);
    ~RegisterWindow();

private:
    Ui::RegisterWindow *ui;
    AgendaService agendaService;
    void clearLines();

private slots:
    void on_OKBtn_clicked();

    void on_cancelBtn_clicked();

    void receiveRegister();

signals:
    void sendRegisterDone();
};

#endif // REGISTERWINDOW_HPP
