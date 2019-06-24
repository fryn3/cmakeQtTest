#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "a.h"

#include <QDebug.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    A a;
}

MainWindow::~MainWindow()
{
    delete ui;
}
