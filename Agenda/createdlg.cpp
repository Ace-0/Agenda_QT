#include "createdlg.hpp"
#include "ui_createdlg.h"

CreateDlg::CreateDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateDlg)
{
    ui->setupUi(this);
    std::list<User> participatorsData = agendaService.listAllUsers();
    for (auto it = participatorsData.begin(); it != participatorsData.end(); it++) {
        ui->comboBox->addItem(str2qstr(it->getName()));
    }
    ui->startTimeEdit->setCalendarPopup(true);
    ui->endTimeEdit->setCalendarPopup(true);
}

CreateDlg::~CreateDlg()
{
    delete ui;
}

std::vector<std::string> CreateDlg::getParticipators()
{
    std::vector<std::string> vec;
    for (auto it = participators.begin(); it != participators.end(); it++) {
        vec.push_back(*it);
    }
    return vec;
}

QString CreateDlg::getTitle()
{
    return ui->titleEdt->text();
}

QString CreateDlg::getStartDate()
{
    return ui->startTimeEdit->dateTime().toString("yyyy-MM-dd/hh:mm");
}

QString CreateDlg::getEndDate()
{
    return ui->endTimeEdit->dateTime().toString("yyyy-MM-dd/hh:mm");
}

void CreateDlg::showParticipators()
{
    std::string str = "";
    for (auto it = participators.begin(); it != participators.end(); it++) {
        str += (*it) + ", ";
    }
    ui->listLab->setText(str2qstr(str));
}

void CreateDlg::receiveCreate()
{
    participators.clear();
    ui->titleEdt->clear();
    ui->startTimeEdit->clear();
    ui->endTimeEdit->clear();
    ui->comboBox->clearEditText();

    ui->comboBox->show();
    ui->finishBtn->show();
    ui->addBtn->show();

    ui->titleLab->hide();
    ui->titleEdt->hide();
    ui->startLab->hide();
    ui->startTimeEdit->hide();
    ui->endLab->hide();
    ui->endTimeEdit->hide();
    ui->confirmBtn->hide();
    ui->deleteBtn->hide();

    this->show();
}

void CreateDlg::receiveDelete()
{
    ui->titleEdt->clear();
    ui->titleLab->show();
    ui->titleEdt->show();
    ui->deleteBtn->show();

    ui->listLab->hide();
    ui->comboBox->hide();
    ui->startLab->hide();
    ui->startTimeEdit->hide();
    ui->endLab->hide();
    ui->endTimeEdit->hide();
    ui->confirmBtn->hide();
    ui->finishBtn->hide();
    ui->confirmBtn->hide();
    ui->cancelBtn->hide();
    ui->addBtn->hide();

    this->show();
}

void CreateDlg::on_finishBtn_clicked()
{
    ui->comboBox->clearEditText();
    ui->comboBox->hide();
    ui->finishBtn->hide();
    ui->addBtn->hide();

    ui->titleLab->show();
    ui->titleEdt->show();
    ui->startLab->show();
    ui->startTimeEdit->show();
    ui->endLab->show();
    ui->endTimeEdit->show();
    ui->confirmBtn->show();
}

void CreateDlg::on_cancelBtn_clicked()
{
    participators.clear();
    ui->comboBox->clearEditText();
    this->hide();
    emit sendCreateDone();
}

void CreateDlg::on_addBtn_clicked()
{
    std::string username = qstr2str(ui->comboBox->currentText());
    participators.insert(username);
    ui->comboBox->clearEditText();
    showParticipators();
}

void CreateDlg::on_confirmBtn_clicked()
{
    emit sendCreateDone();
    this->hide();
}

void CreateDlg::on_deleteBtn_clicked()
{
    if (QMessageBox::Yes == QMessageBox::question(this, str2qstr("Confirm"), str2qstr("delete " + qstr2str(ui->titleEdt->text()) + " ?"), QMessageBox::Yes, QMessageBox::No)) {
        emit sendDeleteDone();
    }
    this->hide();
}
