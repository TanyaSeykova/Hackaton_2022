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
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QChartView *chartBookPages;
    QVBoxLayout *verticalLayout_4;
    QLabel *booksReadNum;
    QLabel *pagesReadNum;
    QLabel *pageAverageRead;
    QLabel *bookLengthAvgByPages;
    QLabel *bookLengthByTime;
    QLabel *bookFinishedPerc;
    QChartView *graphicsView;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
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
        label->setStyleSheet(QString::fromUtf8("QObject#label{\n"
"	margin-top: 10%\n"
"}"));

        verticalLayout_2->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonBooks = new QPushButton(centralwidget);
        pushButtonBooks->setObjectName(QString::fromUtf8("pushButtonBooks"));
        pushButtonBooks->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 6px;\n"
"	border-width: 2px;\n"
"	background-color: rgb(119, 106, 166);\n"
"	border-color: rgb(0,0,0);\n"
"	border-style: solid;\n"
"	color: rgb(255,255,255);\n"
"	font-weight: bold;\n"
"	font: 16pt \"Monotype Corsiva\";\n"
"	margin: 0 40px 0 40px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(212, 203, 242);\n"
"	color: rgb(0,0,0);\n"
"}"));

        gridLayout->addWidget(pushButtonBooks, 0, 0, 1, 1);

        pushButtonTemplates = new QPushButton(centralwidget);
        pushButtonTemplates->setObjectName(QString::fromUtf8("pushButtonTemplates"));
        pushButtonTemplates->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius: 6px;\n"
"	border-width: 2px;\n"
"	background-color: rgb(119, 106, 166);\n"
"	border-color: rgb(0,0,0);\n"
"	border-style: solid;\n"
"	color: rgb(255,255,255);\n"
"	font-weight: bold;\n"
"	font: 16pt \"Monotype Corsiva\";\n"
"	margin: 0 40px 0 40px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(212, 203, 242);\n"
"	color: rgb(0,0,0);\n"
"}"));

        gridLayout->addWidget(pushButtonTemplates, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Monotype Corsiva\";"));

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_3->addWidget(label_5);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_3->addWidget(label_7);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_3->addWidget(label_6);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_3->addWidget(label_9);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_3->addWidget(label_11);

        chartBookPages = new QChartView(centralwidget);
        chartBookPages->setObjectName(QString::fromUtf8("chartBookPages"));

        verticalLayout_3->addWidget(chartBookPages);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        booksReadNum = new QLabel(centralwidget);
        booksReadNum->setObjectName(QString::fromUtf8("booksReadNum"));
        booksReadNum->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_4->addWidget(booksReadNum);

        pagesReadNum = new QLabel(centralwidget);
        pagesReadNum->setObjectName(QString::fromUtf8("pagesReadNum"));
        pagesReadNum->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_4->addWidget(pagesReadNum);

        pageAverageRead = new QLabel(centralwidget);
        pageAverageRead->setObjectName(QString::fromUtf8("pageAverageRead"));
        pageAverageRead->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_4->addWidget(pageAverageRead);

        bookLengthAvgByPages = new QLabel(centralwidget);
        bookLengthAvgByPages->setObjectName(QString::fromUtf8("bookLengthAvgByPages"));
        bookLengthAvgByPages->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_4->addWidget(bookLengthAvgByPages);

        bookLengthByTime = new QLabel(centralwidget);
        bookLengthByTime->setObjectName(QString::fromUtf8("bookLengthByTime"));
        bookLengthByTime->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_4->addWidget(bookLengthByTime);

        bookFinishedPerc = new QLabel(centralwidget);
        bookFinishedPerc->setObjectName(QString::fromUtf8("bookFinishedPerc"));
        bookFinishedPerc->setStyleSheet(QString::fromUtf8("margin-left: 7.5px;"));

        verticalLayout_4->addWidget(bookFinishedPerc);

        graphicsView = new QChartView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_4->addWidget(graphicsView);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(1, 10);

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
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\207\320\265\321\202\320\265\320\275\320\270 \320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\270: ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\276 \320\230\320\267\321\207\320\265\321\202\320\265\320\275\320\270 \320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\270 \320\275\320\260 \320\264\320\265\320\275: ", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\260 \320\224\321\212\320\273\320\266\320\270\320\275\320\260 \320\275\320\260 \320\232\320\275\320\270\320\263\320\260 \320\277\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\320\270:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\260 \320\224\321\212\320\273\320\266\320\270\320\275\320\260 \320\275\320\260 \320\232\320\275\320\270\320\263\320\260 \320\277\320\276 \320\264\320\275\320\270 \321\207\320\265\321\202\320\265\320\275\320\265:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\262\321\212\321\200\321\210\320\265\320\275\320\270 \320\232\320\275\320\270\320\263\320\270:", nullptr));
        booksReadNum->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        pagesReadNum->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        pageAverageRead->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        bookLengthAvgByPages->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        bookLengthByTime->setText(QCoreApplication::translate("MainWindow", "#", nullptr));
        bookFinishedPerc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
