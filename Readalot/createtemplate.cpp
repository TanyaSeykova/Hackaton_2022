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

    currentObj.insert("name", ui->lineEditNameTemplate->text());
    currentObj.insert("nameBook", ui->checkBoxName->isChecked());
    currentObj.insert("author", ui->checkBoxAuthor->isChecked());
    currentObj.insert("series", ui->checkBoxSeries->isChecked());
    currentObj.insert("dateStarted", ui->checkBoxDateStarted->isChecked());
    currentObj.insert("dateFinished", ui->checkBoxDateFinished->isChecked());
    currentObj.insert("score", ui->checkBoxScore->isChecked());
    currentObj.insert("publisher", ui->checkBoxPublisher->isChecked());
    currentObj.insert("datePublished", ui->checkBoxDatePublished->isChecked());
    currentObj.insert("datePublishedBulgaria", ui->checkBoxDatePublishedBulgaria->isChecked());
    currentObj.insert("pages", ui->checkBoxPages->isChecked());
    currentObj.insert("format", ui->checkBoxFormat->isChecked());
    currentObj.insert("ficnonfic", ui->checkBoxFiction->isChecked());
    currentObj.insert("genre", ui->checkBoxGenre->isChecked());
    currentObj.insert("source", ui->checkBoxSource->isChecked());
    currentObj.insert("translation", ui->checkBoxTranslation->isChecked());
    currentObj.insert("language", ui->checkBoxLanguage->isChecked());
    currentObj.insert("country", ui->checkBoxCountry->isChecked());
    currentObj.insert("notes", ui->checkBoxNotes->isChecked());
    currentObj.insert("spicy", ui->checkBoxSpicy->isChecked());
    currentObj.insert("tropes", ui->checkBoxTropes->isChecked());
    currentObj.insert("fantasyKind", ui->checkBoxFantasyKind->isChecked());
    currentObj.insert("magicSystem", ui->checkBoxMagicSystem->isChecked());
    currentObj.insert("scifiKind", ui->checkBoxScifiKind->isChecked());
    currentObj.insert("future", ui->checkBoxFuture->isChecked());
    currentObj.insert("mystery", ui->checkBoxMystery->isChecked());
    currentObj.insert("scary", ui->checkBoxScariness->isChecked());
    currentObj.insert("disgust", ui->checkBoxDisgust->isChecked());
    currentObj.insert("epoch", ui->checkBoxEpoch->isChecked());
    currentObj.insert("correctness", ui->checkBoxCorrectness->isChecked());

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
    ui->lineEditNameTemplate->setText(currentObj["name"].toString());
    ui->checkBoxName->setChecked(currentObj["nameBook"].toBool());
    ui->checkBoxAuthor->setChecked(currentObj["author"].toBool());
    ui->checkBoxSeries->setChecked(currentObj["series"].toBool());
    ui->checkBoxDateStarted->setChecked(currentObj["dateStarted"].toBool());
    ui->checkBoxDateFinished->setChecked(currentObj["dateFinished"].toBool());
    ui->checkBoxScore->setChecked(currentObj["score"].toBool());
    ui->checkBoxPublisher->setChecked(currentObj["publisher"].toBool());
    ui->checkBoxDatePublished->setChecked(currentObj["datePublished"].toBool());
    ui->checkBoxDatePublishedBulgaria->setChecked(currentObj["datePublishedBulgaria"].toBool());
    ui->checkBoxPages->setChecked(currentObj["pages"].toBool());
    ui->checkBoxFormat->setChecked(currentObj["format"].toBool());
    ui->checkBoxFiction->setChecked(currentObj["ficnonfic"].toBool());
    ui->checkBoxGenre->setChecked(currentObj["genre"].toBool());
    ui->checkBoxSource->setChecked(currentObj["source"].toBool());
    ui->checkBoxTranslation->setChecked(currentObj["translation"].toBool());
    ui->checkBoxLanguage->setChecked(currentObj["language"].toBool());
    ui->checkBoxCountry->setChecked(currentObj["country"].toBool());
    ui->checkBoxNotes->setChecked(currentObj["notes"].toBool());
    ui->checkBoxSpicy->setChecked(currentObj["spicy"].toBool());
    ui->checkBoxTropes->setChecked(currentObj["tropes"].toBool());
    ui->checkBoxFantasyKind->setChecked(currentObj["fantasyKind"].toBool());
    ui->checkBoxMagicSystem->setChecked(currentObj["magicSystem"].toBool());
    ui->checkBoxScifiKind->setChecked(currentObj["scifiKind"].toBool());
    ui->checkBoxFuture->setChecked(currentObj["future"].toBool());
    ui->checkBoxMystery->setChecked(currentObj["mystery"].toBool());
    ui->checkBoxScariness->setChecked(currentObj["scary"].toBool());
    ui->checkBoxDisgust->setChecked(currentObj["disgust"].toBool());
    ui->checkBoxEpoch->setChecked(currentObj["epoch"].toBool());
    ui->checkBoxCorrectness->setChecked(currentObj["correctness"].toBool());
}

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

    QMessageBox::warning(this, "Редактиране на шаблон", "Успешно запазен шаблон!");
}

void createTemplate::on_pushButtonRemove_clicked()
{
    this->templates.removeAt(this->currentTemplateIndex);

    this->saveToFile();

    QMessageBox::warning(this, "Премахване на шаблон", "Шаблонът е премахнат успешно.");

    this->close();
}

