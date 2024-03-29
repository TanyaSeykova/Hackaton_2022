#ifndef CREATEBOOK_H
#define CREATEBOOK_H

#include <QDialog>
#include <QJsonArray>

namespace Ui {
class CreateBook;
}

class CreateBook : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBook(int indexClicked = -1, QWidget *parent = nullptr);
    ~CreateBook();

private slots:
    void on_pushButtonLoad_clicked();

    void on_pushButtonSave_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::CreateBook *ui;
    void hideMenus();
    void fillTemplates();
    void populateFromTemplate(QJsonValue currTemp);
    void populateEdit();
    void writeBookInformation(QJsonObject book);
    QDate getDateFromString(QString dateStr);
    int indexClicked;
};

#endif // CREATEBOOK_H
