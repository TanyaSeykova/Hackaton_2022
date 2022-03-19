#include "books.h"
#include "ui_books.h"
#include <QBoxLayout>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFormLayout>
#include "utilities.h"

/*QJsonArray readBooks() {
    QFile jsonFile(QDir::currentPath() + "/json_files/books.json");
    if (!jsonFile.open(QIODevice::ReadOnly | QIODevice::Text))
            return QJsonArray();

    QTextStream in(&jsonFile);
    QString result = in.readAll();

    QJsonDocument doc = QJsonDocument::fromJson(result.toUtf8());
    return doc.array();


}*/


Books::Books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Books)
{
    ui->setupUi(this);

    QPixmap pixmap("button.png");
    QIcon ButtonIcon(pixmap);
    ui->addBookButton->setIcon(ButtonIcon);
    //ui->addBookButton->setIconSize(pixmap.rect().size());

    QJsonArray books = readBooks();
QVBoxLayout *booksLayout = new QVBoxLayout[10];
    for(int i = 0; i<10; i++){
//    QWidget *name = new QLabel(books.at(i)["name"].toString());
//    QWidget *cover = new QLabel(books.at(i)["cover"].toString());
//    QWidget *author = new QLabel(books.at(i)["author"].toString());
//    QWidget *started = new QLabel(books.at(i)["started"].toString());
//    QWidget *finished = new QLabel(books.at(i)["finished"].toString());

    QLabel *tryng = new QLabel("try");

    //QLabel *trying = new QLabel("try2");


    //QVBoxLayout *booksLayout = new QVBoxLayout();
    booksLayout->addWidget(tryng, i);
    //booksLayout->addWidget(trying);

    ui->ListBooks->setLayout(booksLayout);
    //this->setLayout(booksLayout);


    //ui->verticalLayout->addWidget(tryng);//doesnt work with cycle
    //ui->verticalLayout->addWidget(trying);


//    ui->verticalLayout->addWidget(name);

//    ui->verticalLayout->addWidget(cover);

//    ui->verticalLayout->addWidget(author);

//    ui->verticalLayout->addWidget(started);

//    ui->verticalLayout->addWidget(finished);

    }
    ////ui->verticalLayout->setLayout(booksLayout);

}



Books::~Books()
{
    delete ui;
}


void Books::on_tabWidget_currentChanged(int index)
{

}

void Books::on_pushButton_clicked()
{

}

