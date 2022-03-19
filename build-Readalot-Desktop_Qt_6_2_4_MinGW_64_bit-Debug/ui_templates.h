/********************************************************************************
** Form generated from reading UI file 'templates.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATES_H
#define UI_TEMPLATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Templates
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAddTemplates;
    QLabel *label;
    QVBoxLayout *templatesLayout;

    void setupUi(QDialog *Templates)
    {
        if (Templates->objectName().isEmpty())
            Templates->setObjectName(QString::fromUtf8("Templates"));
        Templates->resize(699, 510);
        Templates->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 238, 203);"));
        gridLayoutWidget = new QWidget(Templates);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 701, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAddTemplates = new QPushButton(gridLayoutWidget);
        pushButtonAddTemplates->setObjectName(QString::fromUtf8("pushButtonAddTemplates"));
        pushButtonAddTemplates->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButtonAddTemplates, 2, 4, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"Ruslan Display\";\n"
"qproperty-alignment: AlignCenter;\n"
"height: 10%;"));

        gridLayout->addWidget(label, 0, 4, 1, 1);

        templatesLayout = new QVBoxLayout();
        templatesLayout->setObjectName(QString::fromUtf8("templatesLayout"));

        gridLayout->addLayout(templatesLayout, 1, 4, 1, 1);


        retranslateUi(Templates);

        QMetaObject::connectSlotsByName(Templates);
    } // setupUi

    void retranslateUi(QDialog *Templates)
    {
        Templates->setWindowTitle(QCoreApplication::translate("Templates", "Dialog", nullptr));
        pushButtonAddTemplates->setText(QCoreApplication::translate("Templates", "+", nullptr));
        label->setText(QCoreApplication::translate("Templates", "\320\250\320\220\320\221\320\233\320\236\320\235\320\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Templates: public Ui_Templates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATES_H
