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

    if (!COMPORT->isOpen()) {
        COMPORT->close();
        delete COMPORT;
        close();
    }

    connect(COMPORT, SIGNAL(readyRead()), this, SLOT(read_data()));
}

void SerialTerminal::on_serialTerminal_rejected() {
    COMPORT->close();
    delete COMPORT;
}

void SerialTerminal::on_pb_send_clicked() {
    if (COMPORT->isOpen()) {
        QString send = ui->le_send->text();
        if (ui->cb_CR->isChecked())
            send += char(13);
        if (ui->cb_LF->isChecked())
            send += char(10);
        COMPORT->write(send.toLatin1());
        COMPORT->flush();
    }
}

void SerialTerminal::read_data() {
    if(COMPORT->isOpen()) {
//        while(COMPORT->bytesAvailable()) {
//            dataFromSerial += COMPORT->readAll();
//        }
//        if (dataFromSerial.at(dataFromSerial.length()-1) == char(10)){
//            ui->pte_read->appendPlainText(dataFromSerial);
//            dataFromSerial = "";
//        }

        while(COMPORT->bytesAvailable()) {
            dataFromSerial += COMPORT->readAll();
        }
        ui->pte_read->insertPlainText(dataFromSerial);
        dataFromSerial = "";
    }
}
