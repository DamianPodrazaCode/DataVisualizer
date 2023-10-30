#include "serialdialog.h"
#include "mainwindow.h"
#include "serialterminal.h"
#include "ui_serialdialog.h"

SerialDialog::SerialDialog(QWidget *parent) : QDialog(parent), ui(new Ui::SerialDialog) {
    ui->setupUi(this);
    fill_cb_serialInfo();
    ui->cb_baudrate->setCurrentText(MainWindow::getSettings("serial", "BaudRate"));
    ui->cb_databits->setCurrentText(MainWindow::getSettings("serial", "DataBits"));
    ui->cb_direction->setCurrentText(MainWindow::getSettings("serial", "Direction"));
    ui->cb_flowcontrol->setCurrentText(MainWindow::getSettings("serial", "FlowControl"));
    ui->cb_parity->setCurrentText(MainWindow::getSettings("serial", "Parity"));
    ui->cb_stopbits->setCurrentText(MainWindow::getSettings("serial", "StopBits"));
    ConnectionType = (bool)(MainWindow::getSettings("serial", "Terminal").toInt());
    // qInfo() << ConnectionType;
    if (ConnectionType) {
        ui->rb_terminal->setChecked(false);
        ui->rb_visualization->setChecked(true);
    } else {
        ui->rb_terminal->setChecked(true);
        ui->rb_visualization->setChecked(false);
    }
}

SerialDialog::~SerialDialog() {
    delete ui;
}

void SerialDialog::fill_cb_serialInfo() {
    ui->cb_portNr->clear();
    for (const QSerialPortInfo &portInfo : QSerialPortInfo::availablePorts()) {
        portInfoList.append(portInfo.portName() + ";" + portInfo.description() + ";" + portInfo.manufacturer() + ";"
                            + portInfo.serialNumber() + ";" + QString::number(portInfo.productIdentifier(), 16) + ";"
                            + QString::number(portInfo.vendorIdentifier(), 16) + ";" + portInfo.systemLocation());

        ui->cb_portNr->addItem(portInfo.portName());
    }
    ui->cb_portNr->model()->sort(0);
}

void SerialDialog::on_pb_rescan_clicked() {
    fill_cb_serialInfo();
}

void SerialDialog::on_cb_baudrate_currentIndexChanged(int index) {
    MainWindow::setSettings("serial", "BaudRate", ui->cb_baudrate->currentText());
}

void SerialDialog::on_cb_databits_currentIndexChanged(int index) {
    MainWindow::setSettings("serial", "DataBits", ui->cb_databits->currentText());
}

void SerialDialog::on_cb_direction_currentIndexChanged(int index) {
    MainWindow::setSettings("serial", "Direction", ui->cb_direction->currentText());
}

void SerialDialog::on_cb_flowcontrol_currentIndexChanged(int index) {
    MainWindow::setSettings("serial", "FlowControl", ui->cb_flowcontrol->currentText());
}

void SerialDialog::on_cb_parity_currentIndexChanged(int index) {
    MainWindow::setSettings("serial", "Parity", ui->cb_parity->currentText());
}

void SerialDialog::on_cb_stopbits_currentIndexChanged(int index) {
    MainWindow::setSettings("serial", "StopBits", ui->cb_stopbits->currentText());
}

void SerialDialog::on_rb_terminal_clicked() {
    MainWindow::setSettings("serial", "Terminal", "0");
    ConnectionType = false;
}

void SerialDialog::on_rb_visualization_clicked() {
    MainWindow::setSettings("serial", "Terminal", "1");
    ConnectionType = true;
}

void SerialDialog::on_pb_cancel_clicked() {
    this->close();
}

void SerialDialog::on_pb_connect_clicked() {
    if (ui->cb_portNr->count() > 0) {
        SerialTerminal *serialTerm = new SerialTerminal();
        serialTerm->setWindowTitle("Serial Terminal " + ui->cb_portNr->currentText());
        //serialTerm->PortName =
        serialTerm->show();
        this->close();
    } else {
        QMessageBox::information(this, tr("WARNING!!!"), tr("No Serial Ports."));
        this->close();
    }
}
