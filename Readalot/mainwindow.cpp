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
    this->showMaximized();

    QBarSet *pagesBars = new QBarSet("Books Read");
    *pagesBars << 0 << 2 << 5 << 6 << 1 << 0 << 1;
    QBarSeries *series = new QBarSeries();
    series->append(pagesBars);

    QStringList categories;
    categories << "1-100" << "101-200" << "201-300" << "301-400" << "401-500" << "501-600" << "600+";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);


    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,10);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chart->setTitle("Брой книги по страници");

    ui->chartBookPages->setChart(chart);
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

