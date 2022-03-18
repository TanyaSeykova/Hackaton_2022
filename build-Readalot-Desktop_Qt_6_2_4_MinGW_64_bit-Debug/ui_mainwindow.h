/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCharts/QChartView>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButtonBooks;
    QPushButton *pushButtonTemplates;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *booksReadNum;
    QLabel *label_7;
    QLabel *pagesReadNum;
    QLabel *label_6;
    QLabel *pageAverageRead;
    QLabel *label_8;
    QLabel *bookLengthAvgByPages;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *bookFinishedPerc;
    QChartView *chartBookPages;
    QChartView *graphicsView;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(242, 238, 203);"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonBooks = new QPushButton(centralwidget);
        pushButtonBooks->setObjectName(QString::fromUtf8("pushButtonBooks"));
        pushButtonBooks->setStyleSheet(QString::fromUtf8("border-radius: 6px;\n"
"border-width: 2px;\n"
"background-color: rgb(119, 106, 166);\n"
"border-color: rgb(0,0,0);\n"
"border-style: solid;\n"
"color: rgb(255,255,255);\n"
"font-weight: bold;\n"
"font: 16pt \"Monotype Corsiva\";\n"
"margin: 0 40px 0 40px;"));

        gridLayout->addWidget(pushButtonBooks, 0, 0, 1, 1);

        pushButtonTemplates = new QPushButton(centralwidget);
        pushButtonTemplates->setObjectName(QString::fromUtf8("pushButtonTemplates"));
        pushButtonTemplates->setStyleSheet(QString::fromUtf8("border-radius: 6px;\n"
"border-width: 2px;\n"
"background-color: rgb(119, 106, 166);\n"
"border-color: rgb(0,0,0);\n"
"border-style: solid;\n"
"color: rgb(255,255,255);\n"
"font-weight: bold;\n"
"font: 16pt \"Monotype Corsiva\";\n"
"margin: 0 40px 0 40px;"));

        gridLayout->addWidget(pushButtonTemplates, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Monotype Corsiva\";"));

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        booksReadNum = new QLabel(centralwidget);
        booksReadNum->setObjectName(QString::fromUtf8("booksReadNum"));

        formLayout->setWidget(0, QFormLayout::FieldRole, booksReadNum);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        pagesReadNum = new QLabel(centralwidget);
        pagesReadNum->setObjectName(QString::fromUtf8("pagesReadNum"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pagesReadNum);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        pageAverageRead = new QLabel(centralwidget);
        pageAverageRead->setObjectName(QString::fromUtf8("pageAverageRead"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pageAverageRead);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        bookLengthAvgByPages = new QLabel(centralwidget);
        bookLengthAvgByPages->setObjectName(QString::fromUtf8("bookLengthAvgByPages"));

        formLayout->setWidget(3, QFormLayout::FieldRole, bookLengthAvgByPages);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_10);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_11);

        bookFinishedPerc = new QLabel(centralwidget);
        bookFinishedPerc->setObjectName(QString::fromUtf8("bookFinishedPerc"));

        formLayout->setWidget(5, QFormLayout::FieldRole, bookFinishedPerc);

        chartBookPages = new QChartView(centralwidget);
        chartBookPages->setObjectName(QString::fromUtf8("chartBookPages"));

        formLayout->setWidget(6, QFormLayout::LabelRole, chartBookPages);

        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        formLayout->setWidget(6, QFormLayout::FieldRole, graphicsView);


        verticalLayout_2->addLayout(formLayout);

        verticalLayout_2->setStretch(1, 10);
        verticalLayout_2->setStretch(4, 50);

        horizontalLayout->addLayout(verticalLayout_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 25);
        horizontalLayout->setStretch(2, 5);

        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">Readalot</span></p></body></html>", nullptr));
        pushButtonBooks->setText(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\270", nullptr));
        pushButtonTemplates->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\261\320\273\320\276\320\275\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\207\320\265\321\202\320\265\320\275\320\270 \320\232\320\275\320\270\320\263\320\270: ", nullptr));
        booksReadNum->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\207\320\265\321\202\320\265\320\275\320\270 \320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\270: ", nullptr));
        pagesReadNum->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\276 \320\230\320\267\321\207\320\265\321\202\320\265\320\275\320\270 \320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\270 \320\275\320\260 \320\264\320\265\320\275: ", nullptr));
        pageAverageRead->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\260 \320\224\321\212\320\273\320\266\320\270\320\275\320\260 \320\275\320\260 \320\232\320\275\320\270\320\263\320\260 \320\277\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\270:", nullptr));
        bookLengthAvgByPages->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\260 \320\224\321\212\320\273\320\266\320\270\320\275\320\260 \320\275\320\260 \320\232\320\275\320\270\320\263\320\260 \320\277\320\276 \320\264\320\275\320\270 \321\207\320\265\321\202\320\265\320\275\320\265:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\262\321\212\321\200\321\210\320\265\320\275\320\270 \320\232\320\275\320\270\320\263\320\270:", nullptr));
        bookFinishedPerc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
