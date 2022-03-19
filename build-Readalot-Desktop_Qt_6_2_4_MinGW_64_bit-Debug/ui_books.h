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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Books
{
public:
    QLabel *label_4;
    QLabel *label_9;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QPushButton *addBookButton;

    void setupUi(QDialog *Books)
    {
        if (Books->objectName().isEmpty())
            Books->setObjectName(QString::fromUtf8("Books"));
        Books->resize(1144, 477);
        Books->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(Books);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 11, 191, 455));
        label_4->setStyleSheet(QString::fromUtf8("background-color: #f2eecb\n"
";"));
        label_9 = new QLabel(Books);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(856, 11, 277, 455));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #f2eecb;"));
        verticalLayoutWidget = new QWidget(Books);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(200, 10, 661, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_3);

        addBookButton = new QPushButton(Books);
        addBookButton->setObjectName(QString::fromUtf8("addBookButton"));
        addBookButton->setGeometry(QRect(940, 40, 81, 29));

        retranslateUi(Books);

        QMetaObject::connectSlotsByName(Books);
    } // setupUi

    void retranslateUi(QDialog *Books)
    {
        Books->setWindowTitle(QCoreApplication::translate("Books", "Dialog", nullptr));
        label_4->setText(QString());
        label_9->setText(QString());
        label_3->setText(QCoreApplication::translate("Books", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">Book List</span></p></body></html>", nullptr));
        addBookButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Books: public Ui_Books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKS_H
