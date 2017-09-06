/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *loginBtn;
    QPushButton *registerBtn;
    QPushButton *quitBtn;
    QLineEdit *usernameEdt;
    QLineEdit *passwordEdt;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(531, 276);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        loginBtn = new QPushButton(centralwidget);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        loginBtn->setGeometry(QRect(50, 170, 121, 41));
        registerBtn = new QPushButton(centralwidget);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));
        registerBtn->setGeometry(QRect(200, 170, 131, 41));
        quitBtn = new QPushButton(centralwidget);
        quitBtn->setObjectName(QStringLiteral("quitBtn"));
        quitBtn->setGeometry(QRect(360, 170, 131, 41));
        usernameEdt = new QLineEdit(centralwidget);
        usernameEdt->setObjectName(QStringLiteral("usernameEdt"));
        usernameEdt->setGeometry(QRect(170, 30, 221, 41));
        passwordEdt = new QLineEdit(centralwidget);
        passwordEdt->setObjectName(QStringLiteral("passwordEdt"));
        passwordEdt->setGeometry(QRect(170, 100, 221, 41));
        passwordEdt->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 30, 111, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 121, 31));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 531, 17));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "MainWindow", Q_NULLPTR));
        loginBtn->setText(QApplication::translate("LoginWindow", "Login", Q_NULLPTR));
        registerBtn->setText(QApplication::translate("LoginWindow", "Register", Q_NULLPTR));
        quitBtn->setText(QApplication::translate("LoginWindow", "Quit", Q_NULLPTR));
        label->setText(QApplication::translate("LoginWindow", "   User:", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginWindow", "  Password:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
