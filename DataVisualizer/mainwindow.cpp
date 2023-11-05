#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "networkdialog.h"
#include "serialdialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QApplication::setApplicationName("Data Visualizer");
    MainWindow::setWindowTitle("Data Visualizer");
    // ui->lDebug->setText(QString("0x%1").arg((int64_t)QThread::currentThread(), 16));
}

MainWindow::~MainWindow() {
    delete ui;
}

QString MainWindow::getSettings(QString group, QString key) {
    QSettings settings("init.ini", QSettings::Format::IniFormat);
    return settings.value(group + "/" + key).toString();
}

void MainWindow::setSettings(QString group, QString key, QString value) {
    QSettings settings("init.ini", QSettings::Format::IniFormat);
    settings.setValue(group + "/" + key, value);
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

void MainWindow::on_actionMacro1_triggered() {
    qInfo() << "ok" << ui->menuMacro->activeAction();
}


void MainWindow::on_actionMacro2_triggered()
{
     qInfo() << "ok" << ui->menuMacro->activeAction();
}

