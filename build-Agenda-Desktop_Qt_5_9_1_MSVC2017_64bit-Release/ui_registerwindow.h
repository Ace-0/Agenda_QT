/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

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

class Ui_RegisterWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *OKBtn;
    QPushButton *cancelBtn;
    QLineEdit *usernameEdt;
    QLineEdit *passwordEdt;
    QLineEdit *emailEdt;
    QLineEdit *phoneEdt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QStringLiteral("RegisterWindow"));
        RegisterWindow->resize(497, 290);
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 141, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 141, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 151, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 151, 31));
        OKBtn = new QPushButton(centralwidget);
        OKBtn->setObjectName(QStringLiteral("OKBtn"));
        OKBtn->setGeometry(QRect(140, 210, 91, 31));
        cancelBtn = new QPushButton(centralwidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(280, 210, 91, 31));
        usernameEdt = new QLineEdit(centralwidget);
        usernameEdt->setObjectName(QStringLiteral("usernameEdt"));
        usernameEdt->setGeometry(QRect(160, 20, 201, 31));
        passwordEdt = new QLineEdit(centralwidget);
        passwordEdt->setObjectName(QStringLiteral("passwordEdt"));
        passwordEdt->setGeometry(QRect(160, 60, 201, 31));
        passwordEdt->setEchoMode(QLineEdit::Password);
        emailEdt = new QLineEdit(centralwidget);
        emailEdt->setObjectName(QStringLiteral("emailEdt"));
        emailEdt->setGeometry(QRect(160, 100, 201, 31));
        phoneEdt = new QLineEdit(centralwidget);
        phoneEdt->setObjectName(QStringLiteral("phoneEdt"));
        phoneEdt->setGeometry(QRect(160, 140, 201, 31));
        RegisterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegisterWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 497, 17));
        RegisterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegisterWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RegisterWindow->setStatusBar(statusbar);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("RegisterWindow", "      user name", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegisterWindow", "      password", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegisterWindow", "        phone", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegisterWindow", "        email", Q_NULLPTR));
        OKBtn->setText(QApplication::translate("RegisterWindow", "OK", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("RegisterWindow", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
