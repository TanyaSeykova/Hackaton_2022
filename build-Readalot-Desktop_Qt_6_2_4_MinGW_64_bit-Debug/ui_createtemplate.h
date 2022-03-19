/********************************************************************************
** Form generated from reading UI file 'createtemplate.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEMPLATE_H
#define UI_CREATETEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_createTemplate
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxDatePublished;
    QCheckBox *checkBoxPages;
    QCheckBox *checkBoxFiction;
    QCheckBox *checkBoxName;
    QCheckBox *checkBoxSource;
    QCheckBox *checkBoxPublisher;
    QCheckBox *checkBoxGenre;
    QCheckBox *checkBoxAuthor;
    QCheckBox *checkBoxFormat;
    QCheckBox *checkBoxDatePublishedBulgaria;
    QCheckBox *checkBoxSeries;
    QCheckBox *checkBoxDateStarted;
    QCheckBox *checkBoxDateFinished;
    QCheckBox *checkBoxScore;
    QCheckBox *checkBoxNotes;
    QCheckBox *checkBoxCountry;
    QCheckBox *checkBoxLanguage;
    QCheckBox *checkBoxTranslation;
    QLabel *label_3;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxSpicy;
    QCheckBox *checkBoxTropes;
    QLabel *label_4;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBoxFantasyKind;
    QCheckBox *checkBoxMagicSystem;
    QLabel *label_5;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBoxScifiKind;
    QCheckBox *checkBoxFuture;
    QLabel *label_6;
    QCheckBox *checkBoxMystery;
    QLabel *label_7;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBoxScariness;
    QCheckBox *checkBoxDisgust;
    QLabel *label_8;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSave;

    void setupUi(QDialog *createTemplate)
    {
        if (createTemplate->objectName().isEmpty())
            createTemplate->setObjectName(QString::fromUtf8("createTemplate"));
        createTemplate->resize(1183, 830);
        createTemplate->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(242, 238, 203)"));
        verticalLayout = new QVBoxLayout(createTemplate);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTitle = new QLabel(createTemplate);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayout->addWidget(labelTitle);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(createTemplate);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(createTemplate);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout);

        label = new QLabel(createTemplate);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        checkBoxDatePublished = new QCheckBox(createTemplate);
        checkBoxDatePublished->setObjectName(QString::fromUtf8("checkBoxDatePublished"));

        gridLayout->addWidget(checkBoxDatePublished, 2, 1, 1, 1);

        checkBoxPages = new QCheckBox(createTemplate);
        checkBoxPages->setObjectName(QString::fromUtf8("checkBoxPages"));

        gridLayout->addWidget(checkBoxPages, 2, 3, 1, 1);

        checkBoxFiction = new QCheckBox(createTemplate);
        checkBoxFiction->setObjectName(QString::fromUtf8("checkBoxFiction"));

        gridLayout->addWidget(checkBoxFiction, 3, 0, 1, 1);

        checkBoxName = new QCheckBox(createTemplate);
        checkBoxName->setObjectName(QString::fromUtf8("checkBoxName"));

        gridLayout->addWidget(checkBoxName, 0, 0, 1, 1);

        checkBoxSource = new QCheckBox(createTemplate);
        checkBoxSource->setObjectName(QString::fromUtf8("checkBoxSource"));

        gridLayout->addWidget(checkBoxSource, 3, 2, 1, 1);

        checkBoxPublisher = new QCheckBox(createTemplate);
        checkBoxPublisher->setObjectName(QString::fromUtf8("checkBoxPublisher"));

        gridLayout->addWidget(checkBoxPublisher, 2, 0, 1, 1);

        checkBoxGenre = new QCheckBox(createTemplate);
        checkBoxGenre->setObjectName(QString::fromUtf8("checkBoxGenre"));

        gridLayout->addWidget(checkBoxGenre, 3, 1, 1, 1);

        checkBoxAuthor = new QCheckBox(createTemplate);
        checkBoxAuthor->setObjectName(QString::fromUtf8("checkBoxAuthor"));

        gridLayout->addWidget(checkBoxAuthor, 0, 1, 1, 1);

        checkBoxFormat = new QCheckBox(createTemplate);
        checkBoxFormat->setObjectName(QString::fromUtf8("checkBoxFormat"));

        gridLayout->addWidget(checkBoxFormat, 2, 4, 1, 1);

        checkBoxDatePublishedBulgaria = new QCheckBox(createTemplate);
        checkBoxDatePublishedBulgaria->setObjectName(QString::fromUtf8("checkBoxDatePublishedBulgaria"));

        gridLayout->addWidget(checkBoxDatePublishedBulgaria, 2, 2, 1, 1);

        checkBoxSeries = new QCheckBox(createTemplate);
        checkBoxSeries->setObjectName(QString::fromUtf8("checkBoxSeries"));

        gridLayout->addWidget(checkBoxSeries, 0, 2, 1, 1);

        checkBoxDateStarted = new QCheckBox(createTemplate);
        checkBoxDateStarted->setObjectName(QString::fromUtf8("checkBoxDateStarted"));

        gridLayout->addWidget(checkBoxDateStarted, 1, 0, 1, 1);

        checkBoxDateFinished = new QCheckBox(createTemplate);
        checkBoxDateFinished->setObjectName(QString::fromUtf8("checkBoxDateFinished"));

        gridLayout->addWidget(checkBoxDateFinished, 1, 1, 1, 1);

        checkBoxScore = new QCheckBox(createTemplate);
        checkBoxScore->setObjectName(QString::fromUtf8("checkBoxScore"));

        gridLayout->addWidget(checkBoxScore, 1, 2, 1, 1);

        checkBoxNotes = new QCheckBox(createTemplate);
        checkBoxNotes->setObjectName(QString::fromUtf8("checkBoxNotes"));

        gridLayout->addWidget(checkBoxNotes, 4, 3, 1, 1);

        checkBoxCountry = new QCheckBox(createTemplate);
        checkBoxCountry->setObjectName(QString::fromUtf8("checkBoxCountry"));

        gridLayout->addWidget(checkBoxCountry, 4, 2, 1, 1);

        checkBoxLanguage = new QCheckBox(createTemplate);
        checkBoxLanguage->setObjectName(QString::fromUtf8("checkBoxLanguage"));

        gridLayout->addWidget(checkBoxLanguage, 4, 1, 1, 1);

        checkBoxTranslation = new QCheckBox(createTemplate);
        checkBoxTranslation->setObjectName(QString::fromUtf8("checkBoxTranslation"));

        gridLayout->addWidget(checkBoxTranslation, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_3 = new QLabel(createTemplate);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxSpicy = new QCheckBox(createTemplate);
        checkBoxSpicy->setObjectName(QString::fromUtf8("checkBoxSpicy"));

        gridLayout_2->addWidget(checkBoxSpicy, 0, 0, 1, 1);

        checkBoxTropes = new QCheckBox(createTemplate);
        checkBoxTropes->setObjectName(QString::fromUtf8("checkBoxTropes"));

        gridLayout_2->addWidget(checkBoxTropes, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        label_4 = new QLabel(createTemplate);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBoxFantasyKind = new QCheckBox(createTemplate);
        checkBoxFantasyKind->setObjectName(QString::fromUtf8("checkBoxFantasyKind"));

        gridLayout_3->addWidget(checkBoxFantasyKind, 0, 0, 1, 1);

        checkBoxMagicSystem = new QCheckBox(createTemplate);
        checkBoxMagicSystem->setObjectName(QString::fromUtf8("checkBoxMagicSystem"));

        gridLayout_3->addWidget(checkBoxMagicSystem, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);

        label_5 = new QLabel(createTemplate);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBoxScifiKind = new QCheckBox(createTemplate);
        checkBoxScifiKind->setObjectName(QString::fromUtf8("checkBoxScifiKind"));

        gridLayout_4->addWidget(checkBoxScifiKind, 0, 0, 1, 1);

        checkBoxFuture = new QCheckBox(createTemplate);
        checkBoxFuture->setObjectName(QString::fromUtf8("checkBoxFuture"));

        gridLayout_4->addWidget(checkBoxFuture, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        label_6 = new QLabel(createTemplate);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        checkBoxMystery = new QCheckBox(createTemplate);
        checkBoxMystery->setObjectName(QString::fromUtf8("checkBoxMystery"));

        verticalLayout->addWidget(checkBoxMystery);

        label_7 = new QLabel(createTemplate);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBoxScariness = new QCheckBox(createTemplate);
        checkBoxScariness->setObjectName(QString::fromUtf8("checkBoxScariness"));

        gridLayout_5->addWidget(checkBoxScariness, 0, 0, 1, 1);

        checkBoxDisgust = new QCheckBox(createTemplate);
        checkBoxDisgust->setObjectName(QString::fromUtf8("checkBoxDisgust"));

        gridLayout_5->addWidget(checkBoxDisgust, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        label_8 = new QLabel(createTemplate);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        checkBox_7 = new QCheckBox(createTemplate);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        gridLayout_6->addWidget(checkBox_7, 0, 0, 1, 1);

        checkBox_8 = new QCheckBox(createTemplate);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        gridLayout_6->addWidget(checkBox_8, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButtonSave = new QPushButton(createTemplate);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        gridLayout_7->addWidget(pushButtonSave, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_7);


        retranslateUi(createTemplate);

        QMetaObject::connectSlotsByName(createTemplate);
    } // setupUi

    void retranslateUi(QDialog *createTemplate)
    {
        createTemplate->setWindowTitle(QCoreApplication::translate("createTemplate", "Dialog", nullptr));
        labelTitle->setText(QCoreApplication::translate("createTemplate", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\241\321\212\320\267\320\264\320\260\320\271 \321\210\320\260\320\261\320\273\320\276\320\275</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("createTemplate", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\230\320\274\320\265 \320\275\320\260 \321\210\320\260\320\261\320\273\320\276\320\275\320\260:</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("createTemplate", "\320\236\321\201\320\275\320\276\320\262\320\275\320\270", nullptr));
        checkBoxDatePublished->setText(QCoreApplication::translate("createTemplate", "\320\224\320\260\321\202\320\260 \320\275\320\260 \320\277\321\203\320\261\320\273\320\270\320\272\321\203\320\262\320\260\320\275\320\265", nullptr));
        checkBoxPages->setText(QCoreApplication::translate("createTemplate", "\320\221\321\200\320\276\320\271 \321\201\321\202\320\260\320\275\320\270\321\206\320\270", nullptr));
        checkBoxFiction->setText(QCoreApplication::translate("createTemplate", "\320\245\321\203\320\264\320\276\320\266\320\265\321\201\321\202\320\262\320\265\320\275\320\260 / \320\275\320\265\321\205\321\203\320\264\320\276\320\266\320\265\321\201\321\202\320\262\320\265\320\275\320\260", nullptr));
        checkBoxName->setText(QCoreApplication::translate("createTemplate", "\320\230\320\274\320\265", nullptr));
        checkBoxSource->setText(QCoreApplication::translate("createTemplate", "\320\237\321\200\320\270\320\264\320\276\320\261\320\270\321\202\320\260 \320\276\321\202", nullptr));
        checkBoxPublisher->setText(QCoreApplication::translate("createTemplate", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\201\321\202\320\262\320\276", nullptr));
        checkBoxGenre->setText(QCoreApplication::translate("createTemplate", "\320\226\320\260\320\275\321\200", nullptr));
        checkBoxAuthor->setText(QCoreApplication::translate("createTemplate", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        checkBoxFormat->setText(QCoreApplication::translate("createTemplate", "\320\244\320\276\321\200\320\274\320\260\321\202", nullptr));
        checkBoxDatePublishedBulgaria->setText(QCoreApplication::translate("createTemplate", "\320\224\320\260\321\202\320\260 \320\275\320\260 \320\277\321\203\320\261\320\273\320\270\320\272\321\203\320\262\320\260\320\275\320\265 \320\262 \320\221\321\212\320\273\320\263\320\260\321\200\320\270\321\217", nullptr));
        checkBoxSeries->setText(QCoreApplication::translate("createTemplate", "\320\237\320\276\321\200\320\265\320\264\320\270\321\206\320\260", nullptr));
        checkBoxDateStarted->setText(QCoreApplication::translate("createTemplate", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\277\320\276\321\207\320\275\320\260\321\202\320\260", nullptr));
        checkBoxDateFinished->setText(QCoreApplication::translate("createTemplate", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\262\321\212\321\200\321\210\320\265\320\275\320\260", nullptr));
        checkBoxScore->setText(QCoreApplication::translate("createTemplate", "\320\236\321\206\320\265\320\275\320\272\320\260", nullptr));
        checkBoxNotes->setText(QCoreApplication::translate("createTemplate", "\320\236\320\261\321\211\320\270 \320\261\320\265\320\273\320\265\320\266\320\272\320\270", nullptr));
        checkBoxCountry->setText(QCoreApplication::translate("createTemplate", "\320\224\321\212\321\200\320\266\320\260\320\262\320\260 \320\275\320\260 \320\277\321\212\321\200\320\262\320\276 \320\270\320\267\320\264\320\260\320\275\320\270\320\265", nullptr));
        checkBoxLanguage->setText(QCoreApplication::translate("createTemplate", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273\320\265\320\275 \320\265\320\267\320\270\320\272", nullptr));
        checkBoxTranslation->setText(QCoreApplication::translate("createTemplate", "\320\237\321\200\320\265\320\262\320\276\320\264\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("createTemplate", "\320\240\320\276\320\274\320\260\320\275\321\202\320\270\320\272\320\260", nullptr));
        checkBoxSpicy->setText(QCoreApplication::translate("createTemplate", "\320\237\320\270\320\272\320\260\320\275\321\202\320\275\320\276\321\201\321\202", nullptr));
        checkBoxTropes->setText(QCoreApplication::translate("createTemplate", "\320\242\321\200\320\276\320\277\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("createTemplate", "\320\244\320\265\320\275\321\202\321\212\320\267\320\270", nullptr));
        checkBoxFantasyKind->setText(QCoreApplication::translate("createTemplate", "\320\222\320\270\320\264 \321\204\320\265\320\275\321\202\321\212\320\267\320\270", nullptr));
        checkBoxMagicSystem->setText(QCoreApplication::translate("createTemplate", "\320\234\320\260\320\263\320\270\321\207\320\265\321\201\320\272\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("createTemplate", "\320\235\320\260\321\203\321\207\320\275\320\260 \321\204\320\260\320\275\321\202\320\260\321\201\321\202\320\270\320\272\320\260", nullptr));
        checkBoxScifiKind->setText(QCoreApplication::translate("createTemplate", "\320\222\320\270\320\264 \321\204\320\260\320\275\321\202\320\260\321\201\321\202\320\270\320\272\320\260", nullptr));
        checkBoxFuture->setText(QCoreApplication::translate("createTemplate", "\320\221\321\212\320\264\320\265\321\211\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("createTemplate", "\320\234\320\270\321\201\321\202\320\265\321\200\320\270\321\217", nullptr));
        checkBoxMystery->setText(QCoreApplication::translate("createTemplate", "\320\234\320\270\321\201\321\202\320\265\321\200\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("createTemplate", "\320\245\320\276\321\200\321\212\321\200", nullptr));
        checkBoxScariness->setText(QCoreApplication::translate("createTemplate", "\320\241\321\202\321\200\320\260\321\210\320\275\320\260", nullptr));
        checkBoxDisgust->setText(QCoreApplication::translate("createTemplate", "\320\237\321\200\320\276\321\202\320\270\320\262\320\275\320\276\321\201\321\202", nullptr));
        label_8->setText(QCoreApplication::translate("createTemplate", "\320\230\321\201\321\202\320\276\321\200\320\270\321\207\320\265\321\201\320\272\320\270 \321\200\320\276\320\274\320\260\320\275\320\270", nullptr));
        checkBox_7->setText(QCoreApplication::translate("createTemplate", "\320\225\320\277\320\276\321\205\320\260", nullptr));
        checkBox_8->setText(QCoreApplication::translate("createTemplate", "\320\230\321\201\321\202\320\276\321\200\320\270\321\207\320\265\321\201\320\272\320\260 \320\272\320\276\321\200\320\265\320\272\321\202\320\275\320\276\321\201\321\202", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("createTemplate", "\320\227\320\260\320\277\320\270\321\210\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createTemplate: public Ui_createTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEMPLATE_H
