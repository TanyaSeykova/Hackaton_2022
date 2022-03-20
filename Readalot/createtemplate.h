#ifndef CREATETEMPLATE_H
#define CREATETEMPLATE_H

#include <QDialog>
#include <QJsonArray>
#include "utilities.h"

namespace Ui {
class createTemplate;
}

class createTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit createTemplate(QWidget *parent = nullptr);
    explicit createTemplate(int index, QWidget *parent = nullptr);
    ~createTemplate();

    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButtonSave_clicked();
    void on_pushButtonRemove_clicked();
    void on_pushButtonBack_clicked();
    void on_editTemplate();

private:
    int currentTemplateIndex;
    QJsonArray templates = readTemplates();
    Ui::createTemplate *ui;

    void setDefault();
    QJsonObject getCurrentObject();
    int exists(QString currentName);
    void setTemplateVars();
};

#endif // CREATETEMPLATE_H
