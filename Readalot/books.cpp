#include "books.h"
#include "ui_books.h"
#include <QBoxLayout>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFormLayout>
#include <QTableWidget>
#include "utilities.h"
#include "createbook.h"




Books::Books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Books)
{
    ui->setupUi(this);

    this->showMaximized();

    QPixmap pixmap("button.png");
    QIcon ButtonIcon(pixmap);
    ui->addBookButton->setIcon(ButtonIcon);
    //ui->addBookButton->setIconSize(pixmap.rect().size());

    QJsonArray books = readBooks();
    QStringList headers = {"Име", "Автор", "Оценка", "Започната на", "Приключена на", "Брой страници"};
    QTableWidget *table = new QTableWidget(10, headers.size());
    ui->verticalLayout->addWidget(table);
    table->setHorizontalHeaderLabels(headers);

    int row = 1;
    for (int i = 0; i<10; i++ ) {

        QTableWidgetItem *name = new QTableWidgetItem(books.at(i)["name"].toString());
        qInfo()<<books.at(i).toString();
        table->setItem(row, 1, name);


        QTableWidgetItem *cover = new QTableWidgetItem(books.at(i)["cover"].toString());
        table->setItem(row, 0, cover);


        QTableWidgetItem *author = new QTableWidgetItem(books.at(i)["author"].toString());
        table->setItem(row, 2, author);


        QTableWidgetItem *started = new QTableWidgetItem(books.at(i)["started"].toString());
        table->setItem(row, 3, started);


        QTableWidgetItem *finished = new QTableWidgetItem(books.at(i)["finished"].toString());
        table->setItem(row, 4, finished);


        QTableWidgetItem *rating = new QTableWidgetItem(books.at(i)["rating"].toString());
        table->setItem(row, 5, rating);

        row++;

    }

}



Books::~Books()
{
    delete ui;
}


void Books::on_tabWidget_currentChanged(int index)
{

}



void Books::on_addBookButton_clicked()
{
    CreateBook window;
    window.setModal(true);
    window.exec();
}

