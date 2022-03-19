#include "createtemplate.h"
#include "ui_createtemplate.h"

createTemplate::createTemplate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createTemplate)
{
    ui->setupUi(this);
}

createTemplate::~createTemplate()
{
    delete ui;
}
