#ifndef BOOKS_H
#define BOOKS_H

#include <QDialog>

namespace Ui {
class Books;
}

class Books : public QDialog
{
    Q_OBJECT

public:
    explicit Books(QWidget *parent = nullptr);
    ~Books();

private:
    Ui::Books *ui;
};

#endif // BOOKS_H
