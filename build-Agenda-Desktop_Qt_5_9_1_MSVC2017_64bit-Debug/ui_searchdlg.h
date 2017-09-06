/********************************************************************************
** Form generated from reading UI file 'searchdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDLG_H
#define UI_SEARCHDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SearchDlg
{
public:
    QPushButton *searchBtn;
    QPushButton *cancelBtn;
    QLineEdit *searchEdt;
    QDateTimeEdit *starttimeEdt;
    QDateTimeEdit *endtimeEdt;
    QLabel *startLab;
    QLabel *endLab;
    QLabel *searchLab;

    void setupUi(QDialog *SearchDlg)
    {
        if (SearchDlg->objectName().isEmpty())
            SearchDlg->setObjectName(QStringLiteral("SearchDlg"));
        SearchDlg->resize(483, 197);
        searchBtn = new QPushButton(SearchDlg);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(90, 150, 121, 31));
        cancelBtn = new QPushButton(SearchDlg);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(260, 150, 131, 31));
        searchEdt = new QLineEdit(SearchDlg);
        searchEdt->setObjectName(QStringLiteral("searchEdt"));
        searchEdt->setGeometry(QRect(190, 60, 221, 41));
        starttimeEdt = new QDateTimeEdit(SearchDlg);
        starttimeEdt->setObjectName(QStringLiteral("starttimeEdt"));
        starttimeEdt->setGeometry(QRect(230, 20, 181, 41));
        endtimeEdt = new QDateTimeEdit(SearchDlg);
        endtimeEdt->setObjectName(QStringLiteral("endtimeEdt"));
        endtimeEdt->setGeometry(QRect(230, 100, 181, 41));
        startLab = new QLabel(SearchDlg);
        startLab->setObjectName(QStringLiteral("startLab"));
        startLab->setGeometry(QRect(80, 30, 131, 31));
        endLab = new QLabel(SearchDlg);
        endLab->setObjectName(QStringLiteral("endLab"));
        endLab->setGeometry(QRect(90, 100, 121, 31));
        searchLab = new QLabel(SearchDlg);
        searchLab->setObjectName(QStringLiteral("searchLab"));
        searchLab->setGeometry(QRect(70, 70, 111, 31));

        retranslateUi(SearchDlg);

        QMetaObject::connectSlotsByName(SearchDlg);
    } // setupUi

    void retranslateUi(QDialog *SearchDlg)
    {
        SearchDlg->setWindowTitle(QApplication::translate("SearchDlg", "Dialog", Q_NULLPTR));
        searchBtn->setText(QApplication::translate("SearchDlg", "search", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("SearchDlg", "cancel", Q_NULLPTR));
        startLab->setText(QApplication::translate("SearchDlg", "start time:", Q_NULLPTR));
        endLab->setText(QApplication::translate("SearchDlg", "end time:", Q_NULLPTR));
        searchLab->setText(QApplication::translate("SearchDlg", "Text:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchDlg: public Ui_SearchDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDLG_H
