#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <QTableView>
#include <list>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   
    ui->setupUi(this);

    userModel = new QStandardItemModel();
    userModel->setHorizontalHeaderItem(0, new QStandardItem("username"));
    userModel->setHorizontalHeaderItem(1, new QStandardItem("email"));
    userModel->setHorizontalHeaderItem(2, new QStandardItem("phone"));

    meetingModel = new QStandardItemModel();
    meetingModel->setHorizontalHeaderItem(0, new QStandardItem("sponsor"));
    meetingModel->setHorizontalHeaderItem(1, new QStandardItem("participator(s)"));
    meetingModel->setHorizontalHeaderItem(2, new QStandardItem("start-date"));
    meetingModel->setHorizontalHeaderItem(3, new QStandardItem("end-date"));
    meetingModel->setHorizontalHeaderItem(4, new QStandardItem("title"));

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    searchDlg = new SearchDlg(this);
    QObject::connect(this, SIGNAL(sendSearch()), searchDlg, SLOT(receiveSearch()));
    QObject::connect(searchDlg, SIGNAL(sendSearchDone()), this, SLOT(receiveSearchDone()));

    createDlg = new CreateDlg(this);
    QObject::connect(this, SIGNAL(sendCreate()), createDlg, SLOT(receiveCreate()));
    QObject::connect(createDlg, SIGNAL(sendCreateDone()), this, SLOT(receiveCreateDone()));
    QObject::connect(this, SIGNAL(sendDelete()), createDlg, SLOT(receiveDelete()));
    QObject::connect(createDlg, SIGNAL(sendDeleteDone()), this, SLOT(receiveDeleteDone()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveLogin() {
    this->setWindowTitle(str2qstr("Welcom, " + m_username));
    this->show();
}

void MainWindow::receiveSearchDone()
{
    searchDlg->hide();
    if (searchDlg->getSearchType() == 0) {
        User user = agendaService.searchUser(qstr2str(searchDlg->getSearchText()));
        std::list<User> users;
        if (user.getName() != "") {
            users.push_back(user);
        }
        setUserForm(users);
    } else if (searchDlg->getSearchType() == 1) {
        std::list<Meeting> meetings = agendaService.meetingQuery(m_username, qstr2str(searchDlg->getSearchText()));
        setMeetingForm(meetings);
    } else {
        std::string startTime = qstr2str(searchDlg->getStartDate());
        std::string endTime = qstr2str(searchDlg->getEndDate());
        std::list<Meeting> meetings = agendaService.meetingQuery(m_username, startTime, endTime);
        setMeetingForm(meetings);
    }

}

void MainWindow::receiveCreateDone()
{
    std::string title = qstr2str(createDlg->getTitle());
    std::string startDate = qstr2str(createDlg->getStartDate());
    std::string endDate = qstr2str(createDlg->getEndDate());
    std::vector<std::string> participators = createDlg->getParticipators();
    if (agendaService.createMeeting(m_username, title, startDate, endDate, participators)) {
        QMessageBox::about(this, str2qstr("Create"), str2qstr("success"));
    }
}

void MainWindow::receiveDeleteDone()
{
    std::string title = qstr2str(createDlg->getTitle());
    if (agendaService.deleteMeeting(m_username, title)) {
        QMessageBox::about(this, str2qstr("Delete"), str2qstr("success"));
    }
}

void MainWindow::on_logoutBtn_clicked()
{
    this->hide();
    emit sendLogout();
    m_username = "";
    m_password = "";
}

void MainWindow::on_listMeetingsBtn_clicked()
{
    std::list<Meeting> meetings = agendaService.listAllMeetings(m_username);
    setMeetingForm(meetings);
}

void MainWindow::on_listSponMeetingBtn_clicked()
{
    std::list<Meeting> meetings = agendaService.listAllSponsorMeetings(m_username);
    setMeetingForm(meetings);
}

void MainWindow::on_listParMeetingsBtn_clicked()
{
    std::list<Meeting> meetings = agendaService.listAllParticipateMeetings(m_username);
    setMeetingForm(meetings);
}

void MainWindow::on_listUsersBtn_clicked()
{
    std::list<User> users = agendaService.listAllUsers();
    setUserForm(users);
}

void MainWindow::setUserForm(std::list<User> users) {
    userModel->clear();
    int index = 0;
    for (auto it = users.begin(); it != users.end(); it++) {
        userModel->setItem(index, 0, new QStandardItem(str2qstr(it->getName())));
        userModel->setItem(index, 1, new QStandardItem(str2qstr(it->getEmail())));
        userModel->setItem(index, 2, new QStandardItem(str2qstr(it->getPhone())));
        index++;
    }
    ui->tableView->setModel(userModel);
    for (int i = 0; i < userModel->rowCount(); i++) {
        for (int j = 0; j < userModel->columnCount(); j++) {
            userModel->item(i, j)->setTextAlignment(Qt::AlignCenter);
        }
    }
    ui->tableView->setColumnWidth(0, 248);
    ui->tableView->setColumnWidth(1, 350);
    ui->tableView->setColumnWidth(2, 300);
    ui->tableView->verticalHeader()->setDefaultSectionSize(50);
    ui->tableView->verticalHeader()->hide();
}

void MainWindow::setMeetingForm(std::list<Meeting> meetings) {
    meetingModel->clear();
    int index = 0;
    for (auto it = meetings.begin(); it != meetings.end(); it++) {
        meetingModel->setItem(index, 0, new QStandardItem(str2qstr(it->getSponsor())));
        std::string participators = "";
        std::vector<std::string> parList = it->getParticipator();
        auto p_it = parList.begin();
        participators += (*p_it);
        p_it++;
        for (; p_it != parList.end(); p_it++) {
            participators += ", " + (*p_it);
        }
        meetingModel->setItem(index, 1, new QStandardItem(str2qstr(participators)));
        meetingModel->setItem(index, 2, new QStandardItem(str2qstr(Date::dateToString(it->getStartDate()))));
        meetingModel->setItem(index, 3, new QStandardItem(str2qstr(Date::dateToString(it->getEndDate()))));
        meetingModel->setItem(index, 4, new QStandardItem(str2qstr(it->getTitle())));
        index++;
    }
    ui->tableView->setModel(meetingModel);
    for (int i = 0; i < meetingModel->rowCount(); i++) {
        for (int j = 0; j < meetingModel->columnCount(); j++) {
            meetingModel->item(i, j)->setTextAlignment(Qt::AlignCenter);
        }
    }
    ui->tableView->setColumnWidth(0, 98);
    ui->tableView->setColumnWidth(1, 200);
    ui->tableView->setColumnWidth(2, 250);
    ui->tableView->setColumnWidth(3, 250);
    ui->tableView->setColumnWidth(4, 100);
    ui->tableView->verticalHeader()->setDefaultSectionSize(50);
    ui->tableView->verticalHeader()->hide();
}

void MainWindow::on_searchUserBtn_clicked()
{
    searchDlg->setSearchType(0);
    emit sendSearch();
}

void MainWindow::on_titleMeetingBtn_clicked()
{
    searchDlg->setSearchType(1);
    emit sendSearch();
}

void MainWindow::on_timeMeetingBtn_clicked()
{
    searchDlg->setSearchType(2);
    emit sendSearch();
}

void MainWindow::on_createBtn_clicked()
{
    emit sendCreate();
}

void MainWindow::on_deleteBtn_clicked()
{
    emit sendDelete();
}
