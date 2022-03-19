#include <utilities.h>
#include <QDir>
#include <QJsonArray>

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

