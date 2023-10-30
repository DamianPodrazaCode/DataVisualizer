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
    // COMPORT->setBaudRate(BaudRate.toInt());

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

    //    COMPORT->setParity(Parity);
    //    COMPORT->setDataBits(DataBits8);
    //    COMPORT->setStopBits(QSerialPort::OneStop);
    //    COMPORT->setFlowControl(QSerialPort::NoFlowControl);
    //    COMPORT->clearError();
    COMPORT->open(QSerialPort::ReadWrite);
    //    if (COMPORT->isOpen()) {
    //        ui->cb_portNr->addItem(portInfo.portName());
    //        COMPORT->close();
    //    }
}

void SerialTerminal::on_serialTerminal_rejected() {
    COMPORT->close();
    delete COMPORT;
}

