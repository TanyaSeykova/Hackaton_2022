#include "books.h"
#include "ui_books.h"
#include <QBoxLayout>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFormLayout>
#include <QTableWidget>
#include <QThread>
#include "utilities.h"
#include "createbook.h"




Books::Books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Books)
{
    ui->setupUi(this);

    this->showMaximized();


    table = new QTableWidget();
    ui->verticalLayout->addWidget(table);
    loadTable();
    connect(table,SIGNAL(cellClicked(int,int)),this,SLOT(openBook(int,int)));
}



Books::~Books()
{
    delete ui;
}


void Books::on_addBookButton_clicked()
{
    CreateBook window;
    window.setModal(true);
    window.exec();
}

void Books::openBook(int row, int column)
{
    if (column == 6){
        CreateBook window(row);
        window.setModal(true);
        window.exec();
    }
}

void Books::loadTable()
{
    books = readBooks();
    QStringList headers = {"Име", "Автор", "Оценка", "Започната на", "Приключена на", "Брой страници", "Отиди на книга"};
    //table->resize(books.size(), headers.size());
    table->setRowCount(books.size());
    table->setColumnCount(headers.size());
    table->setHorizontalHeaderLabels(headers);

    for (int i = 0; i<books.size(); i++ ) {

        QTableWidgetItem *name = new QTableWidgetItem(books.at(i)["nameBook"].toString());
        table->setItem(i, 0, name);

        QTableWidgetItem *author = new QTableWidgetItem(books.at(i)["author"].toString());
        table->setItem(i, 1, author);

        QTableWidgetItem *rating = new QTableWidgetItem(QString::number(books.at(i)["score"].toDouble()));
        table->setItem(i, 2, rating);

        QTableWidgetItem *started = new QTableWidgetItem(books.at(i)["dateStarted"].toString());
        table->setItem(i, 3, started);


        QTableWidgetItem *finished = new QTableWidgetItem(books.at(i)["dateFinished"].toString());
        table->setItem(i, 4, finished);

        QTableWidgetItem *pages = new QTableWidgetItem(QString::number(books.at(i)["pages"].toInteger()));
        table->setItem(i, 5, pages);

    }
    //table->resizeColumnsToContents();
    table->resizeRowsToContents();
}


void Books::on_pushButtonReload_clicked()
{
    table->clear();
    loadTable();
}

