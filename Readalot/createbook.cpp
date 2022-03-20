#include "createbook.h"
#include "ui_createbook.h"
#include "utilities.h"
#include <QJsonArray>
#include <QJsonObject>
#include <QMessageBox>

CreateBook::CreateBook(int _indexClicked, QWidget *parent) :
    QDialog(parent, Qt::WindowMinMaxButtonsHint
            | Qt::WindowContextHelpButtonHint | Qt::WindowCloseButtonHint),
    ui(new Ui::CreateBook)
{
    ui->setupUi(this);
    this->showMaximized();
    indexClicked = _indexClicked;

    hideMenus();
    fillTemplates();
    if (indexClicked >= 0) populateEdit();

    if(indexClicked == -1) ui->pushButtonDelete->setVisible(false);
}

CreateBook::~CreateBook()
{
    delete ui;
}

void CreateBook::hideMenus()
{
    ui->labelName->setVisible(false);
    ui->lineEditName->setVisible(false);

    ui->labelAuthor->setVisible(false);
    ui->lineEditAuthor->setVisible(false);

    ui->labelSeries->setVisible(false);
    ui->lineEditSeries->setVisible(false);

    ui->labelDateStarted->setVisible(false);
    ui->dateEditStarted->setVisible(false);

    ui->labelDateFinished->setVisible(false);
    ui->dateEditFinished->setVisible(false);

    ui->labelScore->setVisible(false);
    ui->comboBoxScore->setVisible(false);

    ui->labelPublisher->setVisible(false);
    ui->lineEditPublisher->setVisible(false);

    ui->labelPublished->setVisible(false);
    ui->dateEditPublished->setVisible(false);

    ui->labelPublishedBulgaria->setVisible(false);
    ui->dateEditPublishedBulgaria->setVisible(false);

    ui->labelPages->setVisible(false);
    ui->lineEditPages->setVisible(false);

    ui->labelFormat->setVisible(false);
    ui->comboBoxFormat->setVisible(false);

    ui->labelFicnonfic->setVisible(false);
    ui->comboBoxFicnonfic->setVisible(false);

    ui->labelGenre->setVisible(false);
    ui->comboBoxGenre->setVisible(false);

    ui->labelSource->setVisible(false);
    ui->comboBoxSource->setVisible(false);

    ui->labelLanguage->setVisible(false);
    ui->lineEditLanguage->setVisible(false);

    ui->labelCountry->setVisible(false);
    ui->lineEditCountry->setVisible(false);

    ui->labelSpicy->setVisible(false);
    ui->comboBoxSpicy->setVisible(false);

    ui->labelTropes->setVisible(false);
    ui->textEditTropes->setVisible(false);

    ui->labelFantasyKind->setVisible(false);
    ui->comboBoxFantasyKind->setVisible(false);

    ui->labelMagicSystem->setVisible(false);
    ui->comboBoxMagicSystem->setVisible(false);

    ui->labelScifiKind->setVisible(false);
    ui->comboBoxScifiKind->setVisible(false);

    ui->labelFuture->setVisible(false);
    ui->comboBoxFuture->setVisible(false);

    ui->labelScary->setVisible(false);
    ui->comboBoxScary->setVisible(false);

    ui->labelDisgust->setVisible(false);
    ui->comboBoxDisgust->setVisible(false);

    ui->labelEpoch->setVisible(false);
    ui->lineEditEpoch->setVisible(false);

    ui->labelCorrectness->setVisible(false);
    ui->comboBoxCorrectness->setVisible(false);

    ui->labelMystery->setVisible(false);
    ui->comboBoxMystery->setVisible(false);

    ui->labelNotes->setVisible(false);
    ui->textEditNotes->setVisible(false);

    ui->checkBoxTranslation->setVisible(false);

    ui->pushButtonSave->setVisible(false);
}

void CreateBook::fillTemplates()
{
    QJsonArray templates = readTemplates();
    for(int i = 0; i < templates.size(); i++){
        QString nameTemplate = templates.at(i)["name"].toString();
        ui->comboBoxTemplate->addItem(nameTemplate);
    }
}

void CreateBook::populateFromTemplate(QJsonValue currTemp)
{
    hideMenus();
    if(currTemp["nameBook"].toBool() != false) {
        ui->labelName->setVisible(true);
        ui->lineEditName->setVisible(true);
    }

    if(currTemp["author"].toBool() != false) {
        ui->labelAuthor->setVisible(true);
        ui->lineEditAuthor->setVisible(true);
    }


    if(currTemp["series"].toBool() != false) {
        ui->labelSeries->setVisible(true);
        ui->lineEditSeries->setVisible(true);
    }

    if(currTemp["dateStarted"].toBool() != false) {
        ui->labelDateStarted->setVisible(true);
        ui->dateEditStarted->setVisible(true);
    }

    if(currTemp["dateFinished"].toBool() != false) {
        ui->labelDateFinished->setVisible(true);
        ui->dateEditFinished->setVisible(true);
    }

    if(currTemp["score"].toBool() != false) {
        ui->labelScore->setVisible(true);
        ui->comboBoxScore->setVisible(true);
    }

    if(currTemp["publisher"].toBool() != false) {
        ui->labelPublisher->setVisible(true);
        ui->lineEditPublisher->setVisible(true);
    }

    if(currTemp["datePublished"].toBool() != false) {
        ui->labelPublished->setVisible(true);
        ui->dateEditPublished->setVisible(true);
    }

    if(currTemp["datePublishedBulgaria"].toBool() != false) {
        ui->labelPublishedBulgaria->setVisible(true);
        ui->dateEditPublishedBulgaria->setVisible(true);
    }

    if(currTemp["pages"].toBool() != false) {
        ui->labelPages->setVisible(true);
        ui->lineEditPages->setVisible(true);
    }

    if(currTemp["format"].toBool() != false) {
        ui->labelFormat->setVisible(true);
        ui->comboBoxFormat->setVisible(true);
    }

    if(currTemp["ficnonfic"].toBool() != false) {
        ui->labelFicnonfic->setVisible(true);
        ui->comboBoxFicnonfic->setVisible(true);
    }

    if(currTemp["genre"].toBool() != false) {
        ui->labelGenre->setVisible(true);
        ui->comboBoxGenre->setVisible(true);
    }

    if(currTemp["source"].toBool() != false) {
        ui->labelSource->setVisible(true);
        ui->comboBoxSource->setVisible(true);
    }


    if(currTemp["language"].toBool() != false) {
        ui->labelLanguage->setVisible(true);
        ui->lineEditLanguage->setVisible(true);
    }

    if(currTemp["country"].toBool() != false) {
        ui->labelCountry->setVisible(true);
        ui->lineEditCountry->setVisible(true);
    }

    if(currTemp["spicy"].toBool() != false) {
        ui->labelSpicy->setVisible(true);
        ui->comboBoxSpicy->setVisible(true);
    }

    if(currTemp["tropes"].toBool() != false) {
        ui->labelTropes->setVisible(true);
        ui->textEditTropes->setVisible(true);
    }



    if(currTemp["fantasyKind"].toBool() != false) {
        ui->labelFantasyKind->setVisible(true);
        ui->comboBoxFantasyKind->setVisible(true);
    }



    if(currTemp["magicSystem"].toBool() != false) {
        ui->labelMagicSystem->setVisible(true);
        ui->comboBoxMagicSystem->setVisible(true);
    }


    if(currTemp["scifiKind"].toBool() != false) {
        ui->labelScifiKind->setVisible(true);
        ui->comboBoxScifiKind->setVisible(true);
    }

    if(currTemp["future"].toBool() != false) {

        ui->labelFuture->setVisible(true);
        ui->comboBoxFuture->setVisible(true);
    }


    if(currTemp["scary"].toBool() != false) {
        ui->labelScary->setVisible(true);
        ui->comboBoxScary->setVisible(true);
    }


    if(currTemp["disgust"].toBool() != false) {

        ui->labelDisgust->setVisible(true);
        ui->comboBoxDisgust->setVisible(true);
    }


    if(currTemp["epoch"].toBool() != false) {
        ui->labelEpoch->setVisible(true);
        ui->lineEditEpoch->setVisible(true);
    }



    if(currTemp["correctness"].toBool() != false) {
        ui->labelCorrectness->setVisible(true);
        ui->comboBoxCorrectness->setVisible(true);
    }

    if(currTemp["mystery"].toBool() != false) {
        ui->labelMystery->setVisible(true);
        ui->comboBoxMystery->setVisible(true);
    }



    if(currTemp["notes"].toBool() != false) {
        ui->labelNotes->setVisible(true);
        ui->textEditNotes->setVisible(true);
    }

    if(currTemp["translation"].toBool() != false) {
        ui->checkBoxTranslation->setVisible(true);
    }

    ui->pushButtonSave->setVisible(true);
}

void CreateBook::populateEdit()
{
    QJsonArray books = readBooks();
    QJsonArray templates = readTemplates();
    QString nameTemplate = books.at(indexClicked)["nameTemplate"].toString();
    int currentTemplateIndex = ui->comboBoxTemplate->findText(nameTemplate);
    QJsonValue currentTemplate = templates.at(currentTemplateIndex);
    populateFromTemplate(currentTemplate);

    writeBookInformation(books.at(indexClicked).toObject());
}

void CreateBook::writeBookInformation(QJsonObject book)
{
    ui->comboBoxTemplate->setCurrentText(book["nameTemplate"].toString());
    if(ui->lineEditName->isVisible()){
        ui->lineEditName->setText(book["nameBook"].toString());
    }
    if(ui->lineEditAuthor->isVisible()){
        ui->lineEditAuthor->setText(book["author"].toString());

    }
    if(ui->lineEditSeries->isVisible()){
        ui->lineEditSeries->setText(book["series"].toString());
    }
    if(ui->dateEditStarted->isVisible()){
        ui->dateEditStarted->setDate(getDateFromString(book["dateStarted"].toString()));
    }
    if(ui->dateEditFinished->isVisible()){
        ui->dateEditFinished->setDate(getDateFromString(book["dateFinished"].toString()));
    }
    if(ui->comboBoxScore->isVisible()){
        ui->comboBoxScore->setCurrentIndex(book["score"].toInteger());
    }
    if(ui->lineEditPublisher->isVisible()){
        ui->lineEditPublisher->setText(book["publisher"].toString());
    }
    if(ui->dateEditPublished->isVisible()){
        ui->dateEditPublished->setDate(getDateFromString(book["datePublished"].toString()));
    }
    if(ui->dateEditPublishedBulgaria->isVisible()){
        ui->dateEditPublishedBulgaria->setDate(getDateFromString(book["datePublishedBulgaria"].toString()));
    }
    if(ui->lineEditPages->isVisible()){
        ui->lineEditPages->setText(QString::number(book["pages"].toInt()));
    }
    if(ui->comboBoxFormat->isVisible()){
        ui->comboBoxFormat->setCurrentIndex(book["format"].toInteger());
    }
    if(ui->comboBoxFicnonfic->isVisible()){
        ui->comboBoxFicnonfic->setCurrentIndex(book["ficnonfic"].toInteger());
    }
    if(ui->comboBoxGenre->isVisible()){
        ui->comboBoxGenre->setCurrentIndex(book["genre"].toInteger());
    }
    if(ui->comboBoxSource->isVisible()){
        ui->comboBoxSource->setCurrentIndex(book["source"].toInteger());
    }
    if(ui->checkBoxTranslation->isVisible()){
        ui->checkBoxTranslation->setChecked(book["translation"].toBool());
    }
    if(ui->lineEditLanguage->isVisible()){
        ui->lineEditLanguage->setText(book["language"].toString());
    }
    if(ui->lineEditCountry->isVisible()){
        ui->lineEditCountry->setText(book["country"].toString());
    }

    if(ui->comboBoxSpicy->isVisible()){
        ui->comboBoxSpicy->setCurrentIndex(book["spicy"].toInteger());
    }
    if(ui->textEditTropes->isVisible()){
        ui->textEditTropes->setPlainText(book["tropes"].toString());
    }
    if(ui->comboBoxFantasyKind->isVisible()){
        ui->comboBoxFantasyKind->setCurrentIndex(book["fantasyKind"].toInteger());
    }
    if(ui->comboBoxMagicSystem->isVisible()){
        ui->comboBoxMagicSystem->setCurrentIndex(book["magicSystem"].toInteger());
    }
    if(ui->lineEditCountry->isVisible()){
        ui->lineEditCountry->setText(book["country"].toString());
    }
    if(ui->comboBoxScifiKind->isVisible()){
        ui->comboBoxScifiKind->setCurrentIndex(book["scifiKind"].toInteger());
    }
    if(ui->comboBoxFuture->isVisible()){
        ui->comboBoxFuture->setCurrentIndex(book["future"].toInteger());
    }
    if(ui->comboBoxMystery->isVisible()){
        ui->comboBoxMystery->setCurrentIndex(book["mystery"].toInteger());
    }
    if(ui->comboBoxScary->isVisible()){
        ui->comboBoxScary->setCurrentIndex(book["scary"].toInteger());
    }
    if(ui->comboBoxDisgust->isVisible()){
        ui->comboBoxDisgust->setCurrentIndex(book["disgust"].toInteger());
    }
    if(ui->lineEditEpoch->isVisible()){
        ui->lineEditEpoch->setText(book["epoch"].toString());
    }
    if(ui->comboBoxCorrectness->isVisible()){
        ui->comboBoxCorrectness->setCurrentIndex(book["correctness"].toInteger());
    }
    if(ui->textEditNotes->isVisible()){
        ui->textEditNotes->setPlainText(book["notes"].toString());
    }
}

QDate CreateBook::getDateFromString(QString dateStr)
{
    QStringList list = dateStr.split(".");
    return QDate(list[2].left(4).toInt(), list[1].toInt(), list[0].toInt());
}

void CreateBook::on_pushButtonLoad_clicked()
{
    QJsonArray templates = readTemplates();
    int currentTemplateIndex = ui->comboBoxTemplate->currentIndex();
    QJsonValue currentTemplate = templates.at(currentTemplateIndex);
    populateFromTemplate(currentTemplate);

}


void CreateBook::on_pushButtonSave_clicked()
{
    QJsonArray books = readBooks();
    QJsonObject book;
    book["nameTemplate"] = ui->comboBoxTemplate->currentText();
    if(ui->lineEditName->isVisible()){
        book["nameBook"] = ui->lineEditName->text();
    }
    if(ui->lineEditAuthor->isVisible()){
        book["author"] = ui->lineEditAuthor->text();
    }
    if(ui->lineEditSeries->isVisible()){
        book["series"] = ui->lineEditSeries->text();
    }
    if(ui->dateEditStarted->isVisible()){
        book["dateStarted"] = ui->dateEditStarted->text();
    }
    if(ui->dateEditFinished->isVisible()){
        book["dateFinished"] = ui->dateEditFinished->text();
    }
    if(ui->comboBoxScore->isVisible()){
        book["score"] = ui->comboBoxScore->currentIndex();
    }
    if(ui->lineEditPublisher->isVisible()){
        book["publisher"] = ui->lineEditPublisher->text();
    }
    if(ui->dateEditPublished->isVisible()){
        book["datePublished"] = ui->dateEditPublished->text();
    }
    if(ui->dateEditPublishedBulgaria->isVisible()){
        book["datePublishedBulgaria"] = ui->dateEditPublishedBulgaria->text();
    }
    if(ui->lineEditPages->isVisible()){
        book["pages"] = ui->lineEditPages->text().toInt();
    }
    if(ui->comboBoxFormat->isVisible()){
        book["format"] = ui->comboBoxFormat->currentIndex();
    }
    if(ui->comboBoxFicnonfic->isVisible()){
        book["ficnonfic"] = ui->comboBoxFicnonfic->currentIndex();
    }
    if(ui->comboBoxGenre->isVisible()){
        book["genre"] = ui->comboBoxGenre->currentIndex();
    }
    if(ui->comboBoxSource->isVisible()){
        book["source"] = ui->comboBoxSource->currentIndex();
    }
    if(ui->checkBoxTranslation->isVisible()){
        book["translation"] = ui->checkBoxTranslation->isChecked();
    }
    if(ui->lineEditLanguage->isVisible()){
        book["language"] = ui->lineEditLanguage->text();
    }
    if(ui->lineEditCountry->isVisible()){
        book["country"] = ui->lineEditCountry->text();
    }

    if(ui->comboBoxSpicy->isVisible()){
        book["spicy"] = ui->comboBoxSpicy->currentIndex();
    }
    if(ui->textEditTropes->isVisible()){
        book["tropes"] = ui->textEditTropes->toPlainText();
    }
    if(ui->comboBoxFantasyKind->isVisible()){
        book["fantasyKind"] = ui->comboBoxFantasyKind->currentIndex();
    }
    if(ui->comboBoxMagicSystem->isVisible()){
        book["magicSystem"] = ui->comboBoxMagicSystem->currentIndex();
    }
    if(ui->lineEditCountry->isVisible()){
        book["country"] = ui->lineEditCountry->text();
    }
    if(ui->comboBoxScifiKind->isVisible()){
        book["scifiKind"] = ui->comboBoxScifiKind->currentIndex();
    }
    if(ui->comboBoxFuture->isVisible()){
        book["future"] = ui->comboBoxFuture->currentIndex();
    }
    if(ui->comboBoxMystery->isVisible()){
        book["mystery"] = ui->comboBoxMystery->currentIndex();
    }
    if(ui->comboBoxScary->isVisible()){
        book["scary"] = ui->comboBoxScary->currentIndex();
    }
    if(ui->comboBoxDisgust->isVisible()){
        book["disgust"] = ui->comboBoxDisgust->currentIndex();
    }
    if(ui->lineEditEpoch->isVisible()){
        book["epoch"] = ui->lineEditEpoch->text();
    }
    if(ui->comboBoxCorrectness->isVisible()){
        book["correctness"] = ui->comboBoxCorrectness->currentIndex();
    }
    if(ui->textEditNotes->isVisible()){
        book["notes"] = ui->textEditNotes->toPlainText();
    }

    if (indexClicked != -1){
        books.replace(indexClicked, book);
        saveToFile(books, "books.json");
        QMessageBox::information(this, "Редактиране на книга", "Книгата беше редактирана успешно!");
    } else {
        books.append(book);
        saveToFile(books, "books.json");
        QMessageBox::information(this, "Добавяне на книга", "Книгата беше добавена успешно!");
    }

}



void CreateBook::on_pushButtonDelete_clicked()
{
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Изтриване на книга", "Наистина ли искате да изтриете книгата от колекцията си?",
                                    QMessageBox::Yes|QMessageBox::No);

    if(reply == QMessageBox::No) return;
    QJsonArray books = readBooks();
    books.removeAt(indexClicked);
    saveToFile(books, "books.json");
    QMessageBox::information(this, "Изтриване на книга", "Книгата беше изтрита успешно!");
}

