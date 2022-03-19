#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "books.h"
#include "templates.h"

#include <QJsonArray>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBarSet *less100 = new QBarSet("1-100");
    QBarSet *less200 = new QBarSet("101-200");
    QBarSet *less300 = new QBarSet("201-300");
    QBarSet *less400 = new QBarSet("301-400");
    QBarSet *less500 = new QBarSet("401-500");
    QBarSet *less600 = new QBarSet("501-600");
    QBarSet *more600 = new QBarSet(">600");

    *less100 << 0;
    *less200 << 2;
    *less300 << 5;
    *less400 << 6;
    *less500 << 1;
    *less600 << 0;
    *more600 << 1;

    QBarSeries *series = new QBarSeries();
    series->append(less100);
    series->append(less200);
    series->append(less300);
    series->append(less400);
    series->append(less500);
    series->append(less600);
    series->append(more600);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Брой книги по страници");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    ui->chartBookPages->setChart(chart);
    ui->chartBookPages->setFixedWidth(250);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonBooks_clicked()
{
    Books window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButtonTemplates_clicked()
{
    Templates window;
    window.setModal(true);
    window.exec();
}

