#ifndef SEARCHDLG_HPP
#define SEARCHDLG_HPP

#include <QDialog>
#include <QString>

namespace Ui {
class SearchDlg;
}

class SearchDlg : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDlg(QWidget *parent = 0);
    ~SearchDlg();
    QString getSearchText();
    void setSearchType(int type);
    int getSearchType();
    QString getStartDate();
    QString getEndDate();

private:
    Ui::SearchDlg *ui;
    QString searchText;
    int searchType;  // 0: user, 1: meeting title, 2: meeting time

private slots:
    void receiveSearch();

    void on_searchBtn_clicked();

    void on_cancelBtn_clicked();

signals:
    void sendSearchDone();
};

#endif // SEARCHDLG_HPP
