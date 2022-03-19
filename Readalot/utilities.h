#ifndef UTILITIES_H
#define UTILITIES_H

#include <QJsonDocument>

QJsonArray readTemplates();
QJsonArray readBooks();
void saveToFile(QJsonArray data, QString filename);

#endif // UTILITIES_H
