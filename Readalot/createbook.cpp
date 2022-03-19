#include "createbook.h"
#include "ui_createbook.h"

CreateBook::CreateBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateBook)
{
    ui->setupUi(this);
    this->showMaximized();
}

CreateBook::~CreateBook()
{
    delete ui;
}
