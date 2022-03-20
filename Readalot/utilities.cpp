#include <utilities.h>
#include <QDir>
#include <QJsonArray>
#include <QLayout>
#include <QWidget>

QJsonArray readTemplates()
{
    QFile jsonFile(QDir::currentPath() + "/json_files/templates.json");
    if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text))
            return QJsonArray();

    QTextStream in(&jsonFile);
    QString result = in.readAll();

    QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
    return doc.array();
}

QJsonArray readBooks()
{
    QFile jsonFile(QDir::currentPath() + "/json_files/books.json");
    if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text))
            return QJsonArray();

    QTextStream in(&jsonFile);
    QString result = in.readAll();

    QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
    return doc.array();
}


void saveToFile(QJsonArray data, QString filename)
{
    QFile jsonFile(QDir::currentPath() + "/json_files/" + filename);
    if (!jsonFile.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&jsonFile);
    out << QJsonDocument(data).toJson(QJsonDocument::Indented);
}

void removeChildren(QLayout* layout)
{
    QLayoutItem* child;
    while(layout->count()!=0)
    {
        child = layout->takeAt(0);
        if(child->layout() != 0)
        {
            removeChildren(child->layout());
        }
        else if(child->widget() != 0)
        {
            delete child->widget();
        }

        delete child;
    }
}

