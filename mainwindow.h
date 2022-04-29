#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>
#include <iostream>
#include <QMessageBox>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int size = 0;
    int* arr;
    bool exists = false;
    bool found = false;
    bool view = false;
    bool NS = false, BS = false, STLS = false;
    double sortTime, searchTime;
    QString SearchType = "", SortingType = "";
    QMessageBox m;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void NormalSearch(int);
    int BinarySearch(int [], int, int, int);
    void QuickSort(int [],int,int);
    int partition (int [], int,int);
    void BubbleSort(int [], const int );
    void mergesort(int [],int,int);
    void merge(int [],int,int,int);
    void swap (int&,int&);
    void STLF(int);
private slots:
    void on_normalSearch_clicked();

    void on_binarySearch_clicked();

    void on_STLFind_clicked();

    void on_generateDataset_clicked();

    void on_QuickSort_clicked();

    void on_MergeSort_clicked();

    void on_BubbleSort_clicked();

    void on_STLSort_clicked();

    void on_FindIt_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
