#ifndef CREATETEMPLATE_H
#define CREATETEMPLATE_H

#include <QDialog>

namespace Ui {
class createTemplate;
}

class createTemplate : public QDialog
{
    Q_OBJECT

public:
    explicit createTemplate(QWidget *parent = nullptr);
    ~createTemplate();

private:
    Ui::createTemplate *ui;
};

#endif // CREATETEMPLATE_H
