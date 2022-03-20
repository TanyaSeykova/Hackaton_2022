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
#include <QHeaderView>
#include "utilities.h"
#include "createbook.h"




Books::Books(QWidget *parent) :
    QDialog(parent, Qt::WindowMinMaxButtonsHint
            | Qt::WindowContextHelpButtonHint | Qt::WindowCloseButtonHint),
    ui(new Ui::Books)
{
    ui->setupUi(this);

    this->showMaximized();


    table = new QTableWidget();
    ui->verticalLayout->addWidget(table);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
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

        QTableWidgetItem *rating = new QTableWidgetItem(getRating(books.at(i)["score"].toInteger()));
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

QString Books::getRating(int score)
{
    switch (score) {
        case 0: return "⭐"; break;
        case 1: return "⭐1/2"; break;
        case 2: return "⭐⭐"; break;
        case 3: return "⭐⭐1/2"; break;
        case 4: return "⭐⭐⭐"; break;
        case 5: return "⭐⭐⭐1/2"; break;
        case 6: return "⭐⭐⭐⭐"; break;
        case 7: return "⭐⭐⭐⭐1/2"; break;
        case 8: return "⭐⭐⭐⭐⭐"; break;

    default: return "-";
    }
}


void Books::on_pushButtonReload_clicked()
{
    table->clear();
    loadTable();
}


void Books::on_pushButtonBack_clicked()
{
    this->close();
}

