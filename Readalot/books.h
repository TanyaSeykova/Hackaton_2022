#ifndef BOOKS_H
#define BOOKS_H

#include <QDialog>
#include <QTableWidget>
#include <QJsonArray>

namespace Ui {
class Books;
}

class Books : public QDialog
{
    Q_OBJECT

public:
    explicit Books(QWidget *parent = nullptr);
    ~Books();

private slots:

    void on_addBookButton_clicked();

    void openBook(int row, int column);
    void on_pushButtonReload_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::Books *ui;
    QTableWidget *table;
    QJsonArray books;
    void loadTable();
};

#endif // BOOKS_H
