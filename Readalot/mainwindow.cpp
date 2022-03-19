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
    this->resize(800,600);

    this->updateStatistics();
    this->updateBarplot();
    this->updatePiechart();
    this->loadSideImages();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonBooks_clicked()
{
    Books window;
    connect(&window, SIGNAL(destroyed()), this, SLOT(refresh()));
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButtonTemplates_clicked()
{
    Templates window;
    connect(&window, SIGNAL(destroyed()), this, SLOT(refresh()));
    window.setModal(true);
    window.exec();
}

void MainWindow::updateStatistics()
{
    QJsonArray bookArr = readBooks();
    int booksFinished = 0, pagesRead = 0, daysReadingBooks = 0;

    booksByPages.clear();
    booksByPages.push_back(0);
    booksByPages.push_back(0);
    booksByPages.push_back(0);
    booksByPages.push_back(0);
    booksByPages.push_back(0);
    booksByPages.push_back(0);
    booksByPages.push_back(0);

    genres.clear();

    for(const auto &p : bookArr)
    {
        QJsonObject object = p.toObject();
        int pages = object.value("pages").toInt();
        pagesRead += pages;
        booksFinished++;
        QDate startDate = QDate::fromString(object.value("dateStarted").toString(),"d.M.yyyy");
        QDate finishDate = QDate::fromString(object.value("dateFinished").toString(),"d.M.yyyy");
        daysReadingBooks += startDate.daysTo(finishDate);

        if(pages<100) {booksByPages[0]++;}
        else if(pages<101) {booksByPages[1]++;}
        else if(pages<201) {booksByPages[2]++;}
        else if(pages<301) {booksByPages[3]++;}
        else if(pages<401) {booksByPages[4]++;}
        else if(pages<501) {booksByPages[5]++;}
        else {booksByPages[6]++;}

        if(object.contains("genre"))
        {
            QString tempGenre = object.value("genre").toString();
            if(genres.contains(tempGenre))
            {
                genres[tempGenre]++;
            }
            else
            {
                genres[tempGenre] = 1;
            }
        }
        else
        {
            if(genres.contains("Без Жанр"))
            {
                genres["Без Жанр"]++;
            }
            else
            {
                genres["Без Жанр"] = 1;
            }
        }
    }
    ui->booksReadNum->setText(QString::number(booksFinished));
    ui->pagesReadNum->setText(QString::number(pagesRead));
    if(booksFinished != 0)
    {
        ui->bookLengthAvgByPages->setText(QString::number(pagesRead/booksFinished));
    }
    else
    {
        ui->bookLengthAvgByPages->setText("0");
    }
    if(daysReadingBooks != 0)
    {
        ui->pageAverageRead->setText(QString::number(pagesRead/daysReadingBooks));
    }
    else
    {
        ui->pageAverageRead->setText("0");
    }
    if(booksFinished != 0)
    {
        ui->bookLengthByTime->setText(QString::number(daysReadingBooks/booksFinished));
    }
    else
    {
        ui->bookLengthByTime->setText("0");
    }
}

void MainWindow::refresh()
{
    this->updateStatistics();
    this->updateBarplot();
    this->updatePiechart();
}

void MainWindow::updateBarplot()
{
    QBarSet *pagesBars = new QBarSet("Books Read");
    for(int i=0; i<7; i++)
    {
        *pagesBars << booksByPages[i];
    }
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
    chart->legend()->setVisible(false);

    ui->chartBookPages->setChart(chart);
}

void MainWindow::updatePiechart()
{
    QPieSeries *pieSeries = new QPieSeries();
    QHash<QString, int>::iterator i;
    for (i = genres.begin(); i != genres.end(); i++)
    {
        pieSeries->append(i.key(), i.value());
    }

    QChart *chartPie = new QChart();
    chartPie->addSeries(pieSeries);
    chartPie->setTitle("Разпределение на жанрове");

    ui->genrePieChart->setChart(chartPie);
}

void MainWindow::loadSideImages()
{
    QImage imageLeft = QImage("../resources/left.png").scaled(ui->picLeft->width(), ui->picLeft->height(), Qt::KeepAspectRatio);
    QImage imageRight = QImage("../resources/right.png").scaled(ui->picRight->width(), ui->picRight->height(), Qt::KeepAspectRatio);
    ui->picLeft->setScaledContents(true);
    ui->picLeft->setPixmap(QPixmap::fromImage(imageLeft));
    ui->picRight->setScaledContents(true);
    ui->picRight->setPixmap(QPixmap::fromImage(imageRight));
}
