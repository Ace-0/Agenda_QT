/********************************************************************************
** Form generated from reading UI file 'createdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDLG_H
#define UI_CREATEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateDlg
{
public:
    QPushButton *addBtn;
    QPushButton *finishBtn;
    QPushButton *cancelBtn;
    QComboBox *comboBox;
    QLabel *listLab;
    QDateTimeEdit *startTimeEdit;
    QDateTimeEdit *endTimeEdit;
    QPushButton *confirmBtn;
    QLineEdit *titleEdt;
    QLabel *titleLab;
    QLabel *endLab;
    QLabel *startLab;
    QPushButton *deleteBtn;

    void setupUi(QDialog *CreateDlg)
    {
        if (CreateDlg->objectName().isEmpty())
            CreateDlg->setObjectName(QStringLiteral("CreateDlg"));
        CreateDlg->resize(473, 281);
        addBtn = new QPushButton(CreateDlg);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(120, 150, 231, 51));
        finishBtn = new QPushButton(CreateDlg);
        finishBtn->setObjectName(QStringLiteral("finishBtn"));
        finishBtn->setGeometry(QRect(50, 220, 161, 41));
        cancelBtn = new QPushButton(CreateDlg);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(250, 220, 171, 41));
        comboBox = new QComboBox(CreateDlg);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 80, 171, 41));
        comboBox->setDuplicatesEnabled(false);
        comboBox->setFrame(true);
        listLab = new QLabel(CreateDlg);
        listLab->setObjectName(QStringLiteral("listLab"));
        listLab->setGeometry(QRect(30, 20, 431, 41));
        startTimeEdit = new QDateTimeEdit(CreateDlg);
        startTimeEdit->setObjectName(QStringLiteral("startTimeEdit"));
        startTimeEdit->setGeometry(QRect(110, 110, 251, 41));
        endTimeEdit = new QDateTimeEdit(CreateDlg);
        endTimeEdit->setObjectName(QStringLiteral("endTimeEdit"));
        endTimeEdit->setGeometry(QRect(110, 160, 251, 41));
        confirmBtn = new QPushButton(CreateDlg);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        confirmBtn->setGeometry(QRect(50, 220, 161, 41));
        titleEdt = new QLineEdit(CreateDlg);
        titleEdt->setObjectName(QStringLiteral("titleEdt"));
        titleEdt->setGeometry(QRect(120, 70, 221, 31));
        titleLab = new QLabel(CreateDlg);
        titleLab->setObjectName(QStringLiteral("titleLab"));
        titleLab->setGeometry(QRect(20, 70, 151, 31));
        endLab = new QLabel(CreateDlg);
        endLab->setObjectName(QStringLiteral("endLab"));
        endLab->setGeometry(QRect(20, 160, 151, 31));
        startLab = new QLabel(CreateDlg);
        startLab->setObjectName(QStringLiteral("startLab"));
        startLab->setGeometry(QRect(20, 110, 151, 31));
        deleteBtn = new QPushButton(CreateDlg);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(140, 170, 181, 41));

        retranslateUi(CreateDlg);

        QMetaObject::connectSlotsByName(CreateDlg);
    } // setupUi

    void retranslateUi(QDialog *CreateDlg)
    {
        CreateDlg->setWindowTitle(QApplication::translate("CreateDlg", "Dialog", Q_NULLPTR));
        addBtn->setText(QApplication::translate("CreateDlg", "add as a participator", Q_NULLPTR));
        finishBtn->setText(QApplication::translate("CreateDlg", "finish", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("CreateDlg", "cancel", Q_NULLPTR));
        listLab->setText(QApplication::translate("CreateDlg", "current list of participators:", Q_NULLPTR));
        confirmBtn->setText(QApplication::translate("CreateDlg", "confirm", Q_NULLPTR));
        titleEdt->setPlaceholderText(QApplication::translate("CreateDlg", "Input title here", Q_NULLPTR));
        titleLab->setText(QApplication::translate("CreateDlg", "title:", Q_NULLPTR));
        endLab->setText(QApplication::translate("CreateDlg", "end:", Q_NULLPTR));
        startLab->setText(QApplication::translate("CreateDlg", "start:", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("CreateDlg", "delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateDlg: public Ui_CreateDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDLG_H
