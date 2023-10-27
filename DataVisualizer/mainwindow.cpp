#include "mainwindow.h"
#include "networkdialog.h"
#include "serialdialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QApplication::setApplicationName("Data Visualizer");
    MainWindow::setWindowTitle("Data Visualizer");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_actionExit_triggered() {
    QApplication::exit();
}

void MainWindow::on_actionSerial_triggered() {
    SerialDialog *serial = new SerialDialog(this);
    serial->show();
}

void MainWindow::on_actionNetwork_triggered() {
    NetworkDialog *network = new NetworkDialog(this);
    network->show();
}
