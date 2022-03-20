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

    void on_lineEditSearch_textChanged(const QString &arg1);

private:
    Ui::Books *ui;
    QTableWidget *table;
    QJsonArray books;
    void loadTable();
    QString getRating(int score);
    void addBookRow(int tr, int bookIndex);
};

#endif // BOOKS_H
