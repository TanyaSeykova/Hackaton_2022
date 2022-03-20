#ifndef UTILITIES_H
#define UTILITIES_H

#include <QJsonDocument>
#include <QLayout>

QJsonArray readTemplates();
QJsonArray readBooks();
void saveToFile(QJsonArray data, QString filename);
void removeChildren(QLayout* layout);

#endif // UTILITIES_H
