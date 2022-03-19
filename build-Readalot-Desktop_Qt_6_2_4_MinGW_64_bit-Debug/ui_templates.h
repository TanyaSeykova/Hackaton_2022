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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Templates
{
public:
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonAddTemplates;
    QVBoxLayout *templatesLayout;

    void setupUi(QDialog *Templates)
    {
        if (Templates->objectName().isEmpty())
            Templates->setObjectName(QString::fromUtf8("Templates"));
        Templates->resize(699, 510);
        verticalLayout_2 = new QVBoxLayout(Templates);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonAddTemplates = new QPushButton(Templates);
        pushButtonAddTemplates->setObjectName(QString::fromUtf8("pushButtonAddTemplates"));

        verticalLayout_2->addWidget(pushButtonAddTemplates);

        templatesLayout = new QVBoxLayout();
        templatesLayout->setObjectName(QString::fromUtf8("templatesLayout"));

        verticalLayout_2->addLayout(templatesLayout);


        retranslateUi(Templates);

        QMetaObject::connectSlotsByName(Templates);
    } // setupUi

    void retranslateUi(QDialog *Templates)
    {
        Templates->setWindowTitle(QCoreApplication::translate("Templates", "Dialog", nullptr));
        pushButtonAddTemplates->setText(QCoreApplication::translate("Templates", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Templates: public Ui_Templates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATES_H
