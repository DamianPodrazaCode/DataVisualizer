#include "serialdialog.h"
#include "ui_serialdialog.h"

SerialDialog::SerialDialog(QWidget *parent) : QDialog(parent), ui(new Ui::SerialDialog) {
    ui->setupUi(this);
    fill_cb_serialInfo();
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
