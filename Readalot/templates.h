#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <QDialog>
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
    void on_editTemplate();

private:
    Ui::Templates *ui;
    void populateTemplates();
};

#endif // TEMPLATES_H
