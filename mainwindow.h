#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <time.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int size;
    int* arr;
    bool exists = false;
    bool found = false;
    bool view = false;
    bool NS = false, BS = false, STLS = false;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void NormalSearch(int);
    void BinarySearch(int);
    void STLFind(int);
    void QuickSort();
    void MergeSort();
    void BubbleSort();
    void STLSort();
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
