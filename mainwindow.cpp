#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPainter"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidget::showMaximized();
    //this->setStyleSheet("background-color: black;");
    QLinearGradient linearGrad(QPointF(100, 100), QPointF(200, 200));
    linearGrad.setColorAt(0, Qt::black);
    linearGrad.setColorAt(1, Qt::white);
    this->setStyleSheet("background-color: ;");
}

MainWindow::~MainWindow()
{

    delete ui;
}

