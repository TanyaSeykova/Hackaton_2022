#include "templates.h"
#include "ui_templates.h"
#include "utilities.h"

#include "createtemplate.h"
#include <QJsonArray>
#include <QDir>
#include <QGroupBox>

Templates::Templates(QWidget *parent) :
    QDialog(parent, Qt::WindowMinMaxButtonsHint
            | Qt::WindowContextHelpButtonHint | Qt::WindowCloseButtonHint),
    ui(new Ui::Templates)
{
    ui->setupUi(this);

    this->templates = readTemplates();
    populateTemplates();
    ui->titleLabel->setAlignment(Qt::AlignCenter);
    ui->templatesList->setAlignment(Qt::AlignTop);
}

Templates::~Templates()
{
    delete ui;
}

QPushButton* Templates::createTemplateButton(const QJsonValue& currTemplate)
{
    QPushButton* templateButton = new QPushButton(currTemplate["name"].toString());
    templateButton->setStyleSheet("QPushButton { color: #884422; background: #c3c3c3; border: 2px solid black; margin: 10px; font: 20pt; } QPushButton:hover {background: #884422; color: #c3c3c3} ");
    templateButton->setMinimumHeight(50);
    connect(templateButton, SIGNAL(clicked()), this, SLOT(on_editTemplate()));
    return templateButton;
}

void Templates::populateTemplates()
{
    for(int i = 0; i < this->templates.size(); i++)
    {
        ui->templatesList->addWidget(createTemplateButton(this->templates.at(i)));
    }
}

void Templates::on_pushButtonAddTemplate_clicked()
{
    createTemplate window;
    window.setModal(true);
    this->close();
    window.exec();
}

void Templates::on_pushButtonBack_clicked()
{
    this->close();
}

void Templates::on_editTemplate()
{
    QString name = qobject_cast<QPushButton*>(sender())->text();

    for(int i = 0; i < this->templates.size(); i++)
    {
        if (this->templates.at(i)["name"].toString() == name)
        {
            createTemplate window(i);
            window.setModal(true);
            this->close();
            window.exec();
            return;
        }
    }
}


void Templates::closeEvent(QCloseEvent *event)
{
    emit this->destroyed();
}

void Templates::on_lineEditSearch_textChanged(const QString &text)
{
    removeChildren(ui->templatesList);

    for(int i = 0; i < this->templates.size(); i++)
    {
        if (text == "" || this->templates.at(i)["name"].toString().toLower().contains(text.toLower()))
        {
            ui->templatesList->addWidget(createTemplateButton(this->templates.at(i)));
        }
    }
}
