#include "searchdlg.hpp"
#include "ui_searchdlg.h"

SearchDlg::SearchDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("Search");
}

SearchDlg::~SearchDlg()
{
    searchText.clear();
    ui->searchEdt->clear();
    delete ui;
}

QString SearchDlg::getSearchText()
{
    return searchText;
}

void SearchDlg::setSearchType(int type)
{
    searchType = type;
}

int SearchDlg::getSearchType() {
    return searchType;
}

QString SearchDlg::getStartDate()
{
    return ui->starttimeEdt->dateTime().toString("yyyy-MM-dd/hh:mm");
}

QString SearchDlg::getEndDate()
{
    return ui->endtimeEdt->dateTime().toString("yyyy-MM-dd/hh:mm");
}

void SearchDlg::receiveSearch()
{
    searchText.clear();
    ui->searchEdt->clear();
    if (searchType == 2) {
        ui->searchEdt->hide();
        ui->searchLab->hide();
        ui->starttimeEdt->show();
        ui->endtimeEdt->show();
        ui->startLab->show();
        ui->endLab->show();
        ui->starttimeEdt->setCalendarPopup(true);
        ui->endtimeEdt->setCalendarPopup(true);
    } else if (searchType == 1) {
        ui->searchEdt->show();
        ui->searchLab->show();
        ui->starttimeEdt->hide();
        ui->endtimeEdt->hide();
        ui->startLab->hide();
        ui->endLab->hide();
        ui->searchLab->setText("Title:");
    } else {
        ui->searchEdt->show();
        ui->searchLab->show();
        ui->starttimeEdt->hide();
        ui->endtimeEdt->hide();
        ui->startLab->hide();
        ui->endLab->hide();
        ui->searchLab->setText("User Name:");
    }
    this->show();
}


void SearchDlg::on_searchBtn_clicked()
{
    searchText = ui->searchEdt->text();
    emit sendSearchDone();
}

void SearchDlg::on_cancelBtn_clicked()
{
    searchText.clear();
    emit sendSearchDone();
}
