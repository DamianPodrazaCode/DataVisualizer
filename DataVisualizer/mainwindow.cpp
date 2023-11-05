#include "mainwindow.h"
#include "macrodialog.h"
#include "networkdialog.h"
#include "serialdialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QApplication::setApplicationName("Data Visualizer");
    MainWindow::setWindowTitle("Data Visualizer");
    // ui->menuMacro->setToolTipsVisible(true);
    // refreshToolTip();
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
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro1");
}

void MainWindow::on_actionMacro2_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro2");
}

void MainWindow::on_actionMacro3_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro3");
}

void MainWindow::on_actionMacro4_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro4");
}

void MainWindow::on_actionMacro5_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro5");
}

void MainWindow::on_actionMacro6_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro6");
}

void MainWindow::on_actionMacro7_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro7");
}

void MainWindow::on_actionMacro8_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro8");
}

void MainWindow::on_actionMacro9_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro9");
}

void MainWindow::on_actionMacro10_triggered() {
    MacroDialog *macro = new MacroDialog(this);
    macro->start("Macro10");
}

void MainWindow::refreshToolTip() {
    ui->menuMacro->actions().at(0)->setToolTip(MainWindow::getSettings("Serial Macro", "Macro1"));
    ui->menuMacro->actions().at(1)->setToolTip("");
    ui->menuMacro->actions().at(2)->setToolTip("");
    ui->menuMacro->actions().at(3)->setToolTip("");
    ui->menuMacro->actions().at(4)->setToolTip("");
    ui->menuMacro->actions().at(5)->setToolTip("");
    ui->menuMacro->actions().at(6)->setToolTip("");
    ui->menuMacro->actions().at(7)->setToolTip("");
    ui->menuMacro->actions().at(8)->setToolTip("");
    ui->menuMacro->actions().at(9)->setToolTip("");
}

void MainWindow::on_actionMacro1_hovered() {
    ui->menuMacro->actions().at(0)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro1"));
}

void MainWindow::on_actionMacro2_hovered() {
    ui->menuMacro->actions().at(1)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro2"));
}

void MainWindow::on_actionMacro3_hovered() {
    ui->menuMacro->actions().at(2)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro3"));
}

void MainWindow::on_actionMacro4_hovered() {
    ui->menuMacro->actions().at(3)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro4"));
}

void MainWindow::on_actionMacro5_hovered() {
    ui->menuMacro->actions().at(4)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro5"));
}

void MainWindow::on_actionMacro6_hovered() {
    ui->menuMacro->actions().at(5)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro6"));
}

void MainWindow::on_actionMacro7_hovered() {
    ui->menuMacro->actions().at(6)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro7"));
}

void MainWindow::on_actionMacro8_hovered() {
    ui->menuMacro->actions().at(7)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro8"));
}

void MainWindow::on_actionMacro9_hovered() {
    ui->menuMacro->actions().at(8)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro9"));
}

void MainWindow::on_actionMacro10_hovered() {
    ui->menuMacro->actions().at(9)->setStatusTip(MainWindow::getSettings("Serial Macro", "Macro10"));
}
