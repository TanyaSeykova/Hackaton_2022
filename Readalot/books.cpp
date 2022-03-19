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
    QTableWidget *table = new QTableWidget(books.size(), headers.size());
    ui->verticalLayout->addWidget(table);
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

