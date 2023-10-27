#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QApplication::setApplicationName("Data Visualizer");
    MainWindow::setWindowTitle("Data Visualizer");
}

MainWindow::~MainWindow() {
    delete ui;
}
