#ifndef BOOKS_H
#define BOOKS_H

#include <QDialog>
#include <QTableWidget>

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
private:
    Ui::Books *ui;
    QTableWidget *table;
};

#endif // BOOKS_H
