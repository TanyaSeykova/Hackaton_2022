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

QT_BEGIN_NAMESPACE

class Ui_Templates
{
public:

    void setupUi(QDialog *Templates)
    {
        if (Templates->objectName().isEmpty())
            Templates->setObjectName(QString::fromUtf8("Templates"));
        Templates->resize(400, 300);

        retranslateUi(Templates);

        QMetaObject::connectSlotsByName(Templates);
    } // setupUi

    void retranslateUi(QDialog *Templates)
    {
        Templates->setWindowTitle(QCoreApplication::translate("Templates", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Templates: public Ui_Templates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATES_H
