/********************************************************************************
** Form generated from reading UI file 'books.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKS_H
#define UI_BOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Books
{
public:

    void setupUi(QDialog *Books)
    {
        if (Books->objectName().isEmpty())
            Books->setObjectName(QString::fromUtf8("Books"));
        Books->resize(400, 300);

        retranslateUi(Books);

        QMetaObject::connectSlotsByName(Books);
    } // setupUi

    void retranslateUi(QDialog *Books)
    {
        Books->setWindowTitle(QCoreApplication::translate("Books", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Books: public Ui_Books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKS_H
