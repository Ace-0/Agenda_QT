#include "registerwindow.hpp"
#include "ui_registerwindow.h"

using std::string;

RegisterWindow::RegisterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::clearLines() {
    ui->usernameEdt->clear();
    ui->passwordEdt->clear();
    ui->emailEdt->clear();
    ui->phoneEdt->clear();
}

void RegisterWindow::on_OKBtn_clicked()
{
    string username = qstr2str(ui->usernameEdt->text()),
            password = qstr2str(ui->passwordEdt->text()),
            email = qstr2str(ui->emailEdt->text()),
            phone = qstr2str(ui->phoneEdt->text());
    clearLines();

    if (username == "" || password == "" || email == "" || phone == "") {
        QMessageBox::warning(this, str2qstr("Error"), str2qstr("Please comlpete your information"));
        return;
    }

    string message = agendaService.userRegister(username, password, email, phone);

    if (message == "") {
        QMessageBox::about(this, str2qstr("Welcom"), str2qstr("Successful registration"));
        this->hide();
        emit sendRegisterDone();
    } else {
        QMessageBox::warning(this, str2qstr("Error"), str2qstr(message));
    }
}

void RegisterWindow::on_cancelBtn_clicked()
{
    clearLines();
    this->hide();
    emit sendRegisterDone();
    return;
}

void RegisterWindow::receiveRegister() {
    this->show();
}
