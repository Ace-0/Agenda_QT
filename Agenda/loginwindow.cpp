#include "loginwindow.hpp"
#include "ui_loginwindow.h"

using std::string;

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    setWindowTitle(str2qstr("Agenda"));
    QLabel *permanent = new QLabel(this);
    permanent->setFrameStyle(QFrame::Box | QFrame::Sunken);
    permanent->setText(tr("<a href=\"https://www.github.com\">github</a>"));
    permanent->setTextFormat(Qt::RichText);
    permanent->setOpenExternalLinks(true);
    ui->statusbar->addPermanentWidget(permanent);
    m_username = "";
    m_password = "";
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_quitBtn_clicked()
{
    agendaService.saveinfile();
    exit(0);
}

void LoginWindow::closeEvent(QCloseEvent *event)
{
    event->accept();
    agendaService.saveinfile();
    exit(0);
}

void LoginWindow::clearLines() {
    ui->usernameEdt->clear();
    ui->passwordEdt->clear();
}

void LoginWindow::on_loginBtn_clicked()
{
    string username = qstr2str(ui->usernameEdt->text()),
        password = qstr2str(ui->passwordEdt->text());

    clearLines();

    if (username == "") {
        QMessageBox::warning(this, str2qstr(string("Error")), str2qstr("Please input your user name"));
        return;
    } else if (password == "") {
        QMessageBox::warning(this, str2qstr(string("Error")), str2qstr("Please input your password"));
        return;
    }

    string message = agendaService.userLogIn(username, password);

    if (message == "") {
        this->hide();
        m_username = username;
        m_password = password;
        emit sendLogin();
    } else {
        QMessageBox::warning(this, str2qstr(string("Error")), str2qstr(message));
    }
}

void LoginWindow::on_registerBtn_clicked()
{
    this->hide();
    emit sendRegister();
}

void LoginWindow::receiveLogout() {
    this->show();
}

void LoginWindow::receiveRegisterDone() {
    this->show();
}
