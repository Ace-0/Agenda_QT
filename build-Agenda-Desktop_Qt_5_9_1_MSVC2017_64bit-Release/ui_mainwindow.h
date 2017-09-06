/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QSplitter *splitter;
    QPushButton *listMeetingsBtn;
    QPushButton *listSponMeetingBtn;
    QPushButton *listParMeetingsBtn;
    QPushButton *listUsersBtn;
    QSplitter *splitter_2;
    QPushButton *searchUserBtn;
    QPushButton *titleMeetingBtn;
    QPushButton *timeMeetingBtn;
    QPushButton *createBtn;
    QPushButton *logoutBtn;
    QPushButton *deleteBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 20, 900, 531));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(1010, 20, 231, 181));
        splitter->setOrientation(Qt::Vertical);
        listMeetingsBtn = new QPushButton(splitter);
        listMeetingsBtn->setObjectName(QStringLiteral("listMeetingsBtn"));
        splitter->addWidget(listMeetingsBtn);
        listSponMeetingBtn = new QPushButton(splitter);
        listSponMeetingBtn->setObjectName(QStringLiteral("listSponMeetingBtn"));
        splitter->addWidget(listSponMeetingBtn);
        listParMeetingsBtn = new QPushButton(splitter);
        listParMeetingsBtn->setObjectName(QStringLiteral("listParMeetingsBtn"));
        splitter->addWidget(listParMeetingsBtn);
        listUsersBtn = new QPushButton(splitter);
        listUsersBtn->setObjectName(QStringLiteral("listUsersBtn"));
        splitter->addWidget(listUsersBtn);
        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(1010, 220, 231, 131));
        splitter_2->setOrientation(Qt::Vertical);
        searchUserBtn = new QPushButton(splitter_2);
        searchUserBtn->setObjectName(QStringLiteral("searchUserBtn"));
        splitter_2->addWidget(searchUserBtn);
        titleMeetingBtn = new QPushButton(splitter_2);
        titleMeetingBtn->setObjectName(QStringLiteral("titleMeetingBtn"));
        splitter_2->addWidget(titleMeetingBtn);
        timeMeetingBtn = new QPushButton(splitter_2);
        timeMeetingBtn->setObjectName(QStringLiteral("timeMeetingBtn"));
        splitter_2->addWidget(timeMeetingBtn);
        createBtn = new QPushButton(centralwidget);
        createBtn->setObjectName(QStringLiteral("createBtn"));
        createBtn->setGeometry(QRect(1010, 380, 231, 41));
        logoutBtn = new QPushButton(centralwidget);
        logoutBtn->setObjectName(QStringLiteral("logoutBtn"));
        logoutBtn->setGeometry(QRect(1010, 510, 231, 41));
        deleteBtn = new QPushButton(centralwidget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(1010, 430, 231, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        listMeetingsBtn->setText(QApplication::translate("MainWindow", "all meetings", Q_NULLPTR));
        listSponMeetingBtn->setText(QApplication::translate("MainWindow", "sponsor meetings", Q_NULLPTR));
        listParMeetingsBtn->setText(QApplication::translate("MainWindow", "participate meetings", Q_NULLPTR));
        listUsersBtn->setText(QApplication::translate("MainWindow", "all users", Q_NULLPTR));
        searchUserBtn->setText(QApplication::translate("MainWindow", "search user", Q_NULLPTR));
        titleMeetingBtn->setText(QApplication::translate("MainWindow", "query meeting by title", Q_NULLPTR));
        timeMeetingBtn->setText(QApplication::translate("MainWindow", "query meeting by time", Q_NULLPTR));
        createBtn->setText(QApplication::translate("MainWindow", "create a meeting", Q_NULLPTR));
        logoutBtn->setText(QApplication::translate("MainWindow", "log out", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("MainWindow", "delete a meeting", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
