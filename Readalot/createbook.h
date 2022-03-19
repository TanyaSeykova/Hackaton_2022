#ifndef CREATEBOOK_H
#define CREATEBOOK_H

#include <QDialog>

namespace Ui {
class CreateBook;
}

class CreateBook : public QDialog
{
    Q_OBJECT

public:
    explicit CreateBook(QWidget *parent = nullptr);
    ~CreateBook();

private slots:
    void on_pushButtonLoad_clicked();

    void on_pushButtonSave_clicked();

private:
    Ui::CreateBook *ui;
    void hideMenus();
    void fillTemplates();
    void populateFromTemplate(QJsonValue currTemp);
};

#endif // CREATEBOOK_H
