#include "serialterminal.h"
#include "ui_serialterminal.h"

SerialTerminal::SerialTerminal(QWidget *parent) : QDialog(parent), ui(new Ui::serialTerminal) {
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::CustomizeWindowHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint
                   | Qt::WindowCloseButtonHint);
}

SerialTerminal::~SerialTerminal() {
    delete ui;
}

void SerialTerminal::start() {
    COMPORT = new QSerialPort();
    COMPORT->setPortName(PortName);
    COMPORT->setBaudRate(BaudRate.toInt());

    if (Parity == (QString) "NoParity")
        COMPORT->setParity(QSerialPort::NoParity);
    else if (Parity == (QString) "EvenParity")
        COMPORT->setParity(QSerialPort::EvenParity);
    else if (Parity == (QString) "OddParity")
        COMPORT->setParity(QSerialPort::OddParity);
    else if (Parity == (QString) "SpaceParity")
        COMPORT->setParity(QSerialPort::SpaceParity);
    else if (Parity == (QString) "EvenParity")
        COMPORT->setParity(QSerialPort::MarkParity);

    if (DataBits == (QString) "Data5")
        COMPORT->setDataBits(QSerialPort::Data5);
    else if (DataBits == (QString) "Data6")
        COMPORT->setDataBits(QSerialPort::Data6);
    else if (DataBits == (QString) "Data7")
        COMPORT->setDataBits(QSerialPort::Data7);
    else if (DataBits == (QString) "Data8")
        COMPORT->setDataBits(QSerialPort::Data8);

    if (StopBits == (QString) "OneStop")
        COMPORT->setStopBits(QSerialPort::OneStop);
    else if (StopBits == (QString) "OneAndHalfStop")
        COMPORT->setStopBits(QSerialPort::OneAndHalfStop);
    else if (StopBits == (QString) "TwoStop")
        COMPORT->setStopBits(QSerialPort::TwoStop);

    if (FlowControl == (QString) "NoFlowControl")
        COMPORT->setFlowControl(QSerialPort::NoFlowControl);
    else if (FlowControl == (QString) "HardwareControl")
        COMPORT->setFlowControl(QSerialPort::HardwareControl);
    else if (FlowControl == (QString) "SoftwareControl")
        COMPORT->setFlowControl(QSerialPort::SoftwareControl);

    COMPORT->clearError();
    COMPORT->open(QSerialPort::ReadWrite);

}

void SerialTerminal::on_serialTerminal_rejected() {
    COMPORT->close();
    delete COMPORT;
}
