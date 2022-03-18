#include "templates.h"
#include "ui_templates.h"

Templates::Templates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Templates)
{
    ui->setupUi(this);
}

Templates::~Templates()
{
    delete ui;
}
