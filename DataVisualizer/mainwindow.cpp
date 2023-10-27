#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "networkdialog.h"
#include "serialdialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QApplication::setApplicationName("Data Visualizer");
    MainWindow::setWindowTitle("Data Visualizer");
    ui->lDebug->setText(QString("0x%1").arg((int64_t)QThread::currentThread(), 16));


}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionExit_triggered() {
    QApplication::exit();
}

void MainWindow::on_actionSerial_triggered() {
    SerialDialog *serial = new SerialDialog(this);
    serial->setWindowTitle("New Serial Connection.");
    serial->show();
}

void MainWindow::on_actionNetwork_triggered() {
    NetworkDialog *network = new NetworkDialog(this);
    network->setWindowTitle("New Network Connection.");
    network->show();
}
