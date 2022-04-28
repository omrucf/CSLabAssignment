#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NormalSearch(int num)
{
    if(exists)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==num)
            {
                found = true;
                ui->status->setText("FOUND!!\nthe number: " + QString::number(num) + " exists in the list in the position number: " + QString::number(i) + "!");
            }
        }
        if(!found && ui->number->text()!="")
        {
            ui->status->setText("number: " + QString::number(num) + " was not found!");
            found = false;
        }
        else if(!found)
        {
            ui->status->setText("please type a number first!");
            found = false;
        }
        found = false;
    }
}

void MainWindow::BinarySearch(int num)
{

}

void MainWindow::STLFind(int num)
{

}

void MainWindow::QuickSort()
{

}

void MainWindow::MergeSort()
{

}

void MainWindow::BubbleSort()
{

}

void MainWindow::STLSort()
{

}


void MainWindow::on_normalSearch_clicked()
{
    NS=true,BS=false,STLS=false;
}


void MainWindow::on_binarySearch_clicked()
{
     NS=false,BS=true,STLS=false;
}


void MainWindow::on_STLFind_clicked()
{
     NS=false,BS=false,STLS=true;
}


void MainWindow::on_generateDataset_clicked()
{
    size = ui->size->text().toInt();
    if(exists)
    {
        delete arr;
        arr = new int [size];
    }
    else
    {
        arr = new int [size];
        exists = true;
    }
    if (view)
    {
    ui->view->clear();
    }
    else
    {
        view = true;
    }
    for (int i = 0; i<size;i++)
    {
        arr[i]=rand()%size+1;
        ui->view->addItem(QString::number(i) + ": " + QString::number(arr[i]));
    }
}


void MainWindow::on_QuickSort_clicked()
{

}


void MainWindow::on_MergeSort_clicked()
{

}


void MainWindow::on_BubbleSort_clicked()
{

}


void MainWindow::on_STLSort_clicked()
{

}


void MainWindow::on_FindIt_clicked()
{
    int num = ui->number->text().toInt();
    if(NS)
    {
        NormalSearch(num);
    }
}

