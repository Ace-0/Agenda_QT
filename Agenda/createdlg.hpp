#ifndef CREATEDLG_HPP
#define CREATEDLG_HPP

#include <QDialog>
#include "agendaservice.hpp"
#include <set>
#include <QMessageBox>

namespace Ui {
class CreateDlg;
}

class CreateDlg : public QDialog
{
    Q_OBJECT

public:
    explicit CreateDlg(QWidget *parent = 0);
    ~CreateDlg();
    std::vector<std::string> getParticipators();
    QString getTitle();
    QString getStartDate();
    QString getEndDate();

private:
    Ui::CreateDlg *ui;
    AgendaService agendaService;
    std::set<std::string> participators;
    void showParticipators();

private slots:
    void receiveCreate();

    void receiveDelete();

    void on_finishBtn_clicked();

    void on_cancelBtn_clicked();

    void on_addBtn_clicked();

    void on_confirmBtn_clicked();

    void on_deleteBtn_clicked();

signals:
    void sendCreateDone();

    void sendDeleteDone();
};

#endif // CREATEDLG_HPP
