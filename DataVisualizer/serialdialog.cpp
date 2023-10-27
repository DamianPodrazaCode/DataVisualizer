#include "serialdialog.h"
#include "ui_serialdialog.h"

SerialDialog::SerialDialog(QWidget *parent) : QDialog(parent), ui(new Ui::SerialDialog) {
    ui->setupUi(this);

//    for (const QSerialPortInfo &portInfo : QSerialPortInfo::availablePorts()) {
//        qInfo() << "portName : " << portInfo.portName();
//        qInfo() << "description : " << portInfo.description();
//        qInfo() << "manufacturer : " << portInfo.manufacturer();
//        qInfo() << "serialNumber : " << portInfo.serialNumber();
//        qInfo() << "productIdentifier : "
//                << "(hex)" << QString::number(portInfo.productIdentifier(), 16);
//        qInfo() << "vendorIdentifier : "
//                << "(hex)" << QString::number(portInfo.vendorIdentifier(), 16);
//        qInfo() << "systemLocation : " << portInfo.systemLocation();
//    }
}

SerialDialog::~SerialDialog() {
    delete ui;
}
