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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Books
{
public:
    QWidget *ListBooks;
    QLabel *label_4;
    QLabel *label_9;
    QWidget *widget;
    QLabel *label_3;
    QLabel *label_6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addBookButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;

    void setupUi(QDialog *Books)
    {
        if (Books->objectName().isEmpty())
            Books->setObjectName(QString::fromUtf8("Books"));
        Books->resize(1144, 477);
        Books->setStyleSheet(QString::fromUtf8(""));
        ListBooks = new QWidget(Books);
        ListBooks->setObjectName(QString::fromUtf8("ListBooks"));
        ListBooks->setGeometry(QRect(208, 125, 641, 341));
        label_4 = new QLabel(Books);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 11, 191, 455));
        label_4->setStyleSheet(QString::fromUtf8("background-color: #f2eecb\n"
";"));
        label_9 = new QLabel(Books);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(856, 11, 277, 455));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #f2eecb;"));
        widget = new QWidget(Books);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(198, 11, 661, 461));
        widget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 20, 134, 40));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-81, 20, 134, 110));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 120, 641, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addBookButton = new QPushButton(widget);
        addBookButton->setObjectName(QString::fromUtf8("addBookButton"));
        addBookButton->setGeometry(QRect(510, 20, 134, 29));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 80, 641, 22));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAutoFillBackground(false);
        label_7->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout->addWidget(label_8);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: black;\n"
""));

        horizontalLayout->addWidget(label_2);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: black;"));

        horizontalLayout->addWidget(label_5);


        retranslateUi(Books);

        QMetaObject::connectSlotsByName(Books);
    } // setupUi

    void retranslateUi(QDialog *Books)
    {
        Books->setWindowTitle(QCoreApplication::translate("Books", "Dialog", nullptr));
        label_4->setText(QString());
        label_9->setText(QString());
        label_3->setText(QCoreApplication::translate("Books", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">Book List</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Books", "Cover", nullptr));
        addBookButton->setText(QString());
        label_7->setText(QCoreApplication::translate("Books", "Name", nullptr));
        label_8->setText(QCoreApplication::translate("Books", "Author", nullptr));
        label->setText(QCoreApplication::translate("Books", "Started", nullptr));
        label_2->setText(QCoreApplication::translate("Books", "Finished", nullptr));
        label_5->setText(QCoreApplication::translate("Books", "Rating", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Books: public Ui_Books {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKS_H
