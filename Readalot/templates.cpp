#include "templates.h"
#include "ui_templates.h"

#include <QJsonArray>

Templates::Templates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Templates)
{
    ui->setupUi(this);
    populateTemplates();
}

Templates::~Templates()
{
    delete ui;
}

void Templates::populateTemplates()
{
    QJsonArray templates = readTemplates();

    for(int i = 0; i < templates.size(); i++){
        QPushButton* templateButton = new QPushButton(templates.at(i)["name"].toString());
        ui->templatesLayout->addWidget(templateButton);
    }
}
