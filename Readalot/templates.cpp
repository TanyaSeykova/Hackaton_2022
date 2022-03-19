#include "templates.h"
#include "ui_templates.h"

#include "createtemplate.h"
#include <QJsonArray>
#include <QDir>
#include <QGroupBox>

Templates::Templates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Templates)
{
    ui->setupUi(this);
    populateTemplates();
    ui->titleLabel->setAlignment(Qt::AlignCenter);
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
        templateButton->setStyleSheet("QPushButton { background: #c3c3c3; border: 2px solid black; margin: 10px; } QPushButton:hover {background: #884422; color: #c3c3c3} ");
        templateButton->setMinimumHeight(50);
        connect(templateButton, SIGNAL(clicked()), this, SLOT(on_editTemplate()));
        ui->templatesList->addWidget(templateButton);
    }
}

void Templates::on_pushButtonAddTemplate_clicked()
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

