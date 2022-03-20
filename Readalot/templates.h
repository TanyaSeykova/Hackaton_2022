#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <QDialog>
#include <QJsonArray>
#include "utilities.h"

namespace Ui {
class Templates;
}

class Templates : public QDialog
{
    Q_OBJECT

public:
    explicit Templates(QWidget *parent = nullptr);
    ~Templates();

    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButtonAddTemplate_clicked();
    void on_pushButtonBack_clicked();
    void on_editTemplate();

    void on_lineEditSearch_textChanged(const QString &arg1);

private:
    Ui::Templates *ui;
    QJsonArray templates;

    void populateTemplates();
    QPushButton* createTemplateButton(const QJsonValue& currTemplate);
};

#endif // TEMPLATES_H
