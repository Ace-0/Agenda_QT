#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QStandardItemModel>
#include "agendaservice.hpp"
#include "global.hpp"
#include "searchdlg.hpp"
#include "createdlg.hpp"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    AgendaService agendaService;
    QStandardItemModel* userModel;
    QStandardItemModel* meetingModel;
    SearchDlg* searchDlg;
    CreateDlg* createDlg;
    void setUserForm(std::list<User>);
    void setMeetingForm(std::list<Meeting>);


private slots:
    void receiveLogin();

    void receiveSearchDone();

    void receiveCreateDone();

    void receiveDeleteDone();

    void on_logoutBtn_clicked();

    void on_listMeetingsBtn_clicked();

    void on_listSponMeetingBtn_clicked();

    void on_listParMeetingsBtn_clicked();

    void on_listUsersBtn_clicked();

    void on_searchUserBtn_clicked();

    void on_titleMeetingBtn_clicked();

    void on_timeMeetingBtn_clicked();

    void on_createBtn_clicked();

    void on_deleteBtn_clicked();

signals:
    void sendLogout();

    void sendSearch();

    void sendCreate();

    void sendDelete();
};

#endif // MAINWINDOW_HPP
