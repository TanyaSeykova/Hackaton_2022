#include "templates.h"
#include "ui_templates.h"

#include "createtemplate.h"
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
        connect(templateButton,SIGNAL(clicked()),this,SLOT(on_editTemplate()));
        ui->templatesLayout->addWidget(templateButton);
    }
}

void Templates::on_pushButtonAddTemplates_clicked()
{
    createTemplate window;
    window.setModal(true);
    window.exec();
}

void Templates::on_editTemplate()
{
    QString name = qobject_cast<QPushButton*>(sender())->text();
    QJsonArray templates = readTemplates();

    for(int i = 0; i < templates.size(); i++)
    {
        if (templates.at(i)["name"].toString() == name)
        {
            createTemplate window(i);
            window.setModal(true);
            window.exec();
            return;
        }
    }
}

