#include "createtemplate.h"
#include "ui_createtemplate.h"

#include <QDir>
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include <QMessageBox>
#include <QScrollArea>
#include "utilities.h"

createTemplate::createTemplate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createTemplate)
{
   ui->setupUi(this);
   setDefault();
   ui->pushButtonRemove->setVisible(false);
}

createTemplate::createTemplate(int index, QWidget *parent) : createTemplate(parent)
{
    this->currentTemplateIndex = index;
    this->setTemplateVars();
    disconnect(ui->pushButtonSave,0,0,0);
    connect(ui->pushButtonSave,SIGNAL(clicked()),this,SLOT(on_editTemplate()));
    ui->pushButtonRemove->setVisible(true);
}

createTemplate::~createTemplate()
{
    delete ui;
}

void createTemplate::setDefault()
{
    ui->checkBoxName->setChecked(true);
    ui->checkBoxName->setEnabled(false);
    ui->checkBoxAuthor->setChecked(true);
    ui->checkBoxAuthor->setEnabled(false);
    ui->checkBoxScore->setChecked(true);
    ui->checkBoxScore->setEnabled(false);
    ui->checkBoxDateStarted->setChecked(true);
    ui->checkBoxDateStarted->setEnabled(false);
    ui->checkBoxDateFinished->setChecked(true);
    ui->checkBoxDateFinished->setEnabled(false);
    ui->checkBoxPages->setChecked(true);
    ui->checkBoxPages->setEnabled(false);
}

QJsonObject createTemplate::getCurrentObject()
{
    QJsonObject currentObj;

    QList<QCheckBox*> checkboxes = this->findChildren<QCheckBox*>(QRegularExpression(".*"));
    for (auto it = checkboxes.begin(); it != checkboxes.end(); it++)
    {
        currentObj.insert((*it)->objectName().remove(0, 8).toLower(), (*it)->isChecked());
    }

    currentObj.insert("name", ui->lineEditNameTemplate->text());

    return currentObj;
}

int createTemplate::exists(QString currentName)
{
    for(int i = 0; i < this->templates.size(); i++){
        QString name = this->templates.at(i)["name"].toString();
        if (currentName == name)
        {
            QMessageBox::StandardButton result = QMessageBox::question(this, "Име на шаблон", "Съществува шаблон с даденото име. Желаете ли да го презапишете?");
            if (result == QMessageBox::StandardButton::Ok)
                return i;
            else
                return -2;
        }
    }

    return -1;
}

void createTemplate::saveToFile()
{
    QFile jsonFile(QDir::currentPath() + "/json_files/templates.json");
    if (!jsonFile.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&jsonFile);
    out << QJsonDocument(this->templates).toJson(QJsonDocument::Indented);
}

void createTemplate::setTemplateVars()
{
    QJsonValue currentObj = this->templates.at(this->currentTemplateIndex);

    QList<QCheckBox*> checkboxes = this->findChildren<QCheckBox*>(QRegularExpression(".*"));
    for (auto it = checkboxes.begin(); it != checkboxes.end(); it++)
    {
        (*it)->setChecked(currentObj[(*it)->objectName().remove(0, 8).toLower()].toBool());
    }

    ui->lineEditNameTemplate->setText(currentObj["name"].toString());}

void createTemplate::on_pushButtonSave_clicked()
{
    QString name = ui->lineEditNameTemplate->text();

    if (name == "")
    {
        QMessageBox::warning(this, "Име на шаблона", "Името на шаблона трябва да не е празно.");
        return;
    }

    QJsonObject currentObj = getCurrentObject();

    int index = this->exists(name);
    if (index == -2)
        return;
    else if (index == -1)
        this->templates.push_back(currentObj);
    else
        this->templates[index] = currentObj;

    this->saveToFile();

    QMessageBox::warning(this, "Създаване на шаблон", "Успешно запазен шаблон!");
}

void createTemplate::on_editTemplate()
{
    QString name = ui->lineEditNameTemplate->text();

    if (name == "")
    {
        QMessageBox::warning(this, "Име на шаблона", "Името на шаблона трябва да не е празно.");
        return;
    }

    QJsonObject currentObj = getCurrentObject();

    this->templates[this->currentTemplateIndex] = currentObj;

    this->saveToFile();

    QMessageBox::information(this, "Редактиране на шаблон", "Успешно запазен шаблон!");
}

void createTemplate::on_pushButtonRemove_clicked()
{
    this->templates.removeAt(this->currentTemplateIndex);

    this->saveToFile();

    QMessageBox::information(this, "Премахване на шаблон", "Шаблонът е премахнат успешно.");

    this->close();
}

