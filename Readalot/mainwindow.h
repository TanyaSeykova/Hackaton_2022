#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "utilities.h"
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QJsonObject>
#include <QPixmap>
#include <QDir>
#include <vector>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonBooks_clicked();

    void on_pushButtonTemplates_clicked();

    void refresh();

private:
    Ui::MainWindow *ui;
    QVector<int> booksByPages;
    QHash<QString,int> genres;

    void updateStatistics();
    void updateBarplot();
    void updatePiechart();
    void loadSideImages();
};
#endif // MAINWINDOW_H
