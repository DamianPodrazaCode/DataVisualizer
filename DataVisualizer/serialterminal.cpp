#include "serialterminal.h"
#include "mainwindow.h"
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

    ui->cb_CR->setChecked(MainWindow::getSettings("Serial Terminal", "inCR").toInt());
    ui->cb_LF->setChecked(MainWindow::getSettings("Serial Terminal", "inLF").toInt());
    ui->cb_ascii->setChecked(MainWindow::getSettings("Serial Terminal", "ASCII").toInt());
    ui->cb_utf8->setChecked(MainWindow::getSettings("Serial Terminal", "UTF8").toInt());
    ui->cb_hex->setChecked(MainWindow::getSettings("Serial Terminal", "HEX").toInt());
    ui->cb_warp->setChecked(MainWindow::getSettings("Serial Terminal", "WARP").toInt());
    ui->cb_rewind->setChecked(MainWindow::getSettings("Serial Terminal", "AutoScroll").toInt());
    ui->cb_autoDelete->setChecked(MainWindow::getSettings("Serial Terminal", "AutoDelete").toInt());
    ui->le_lineCount->setText(MainWindow::getSettings("Serial Terminal", "LineCount"));
    ui->cb_hiddenCRLF->setChecked(MainWindow::getSettings("Serial Terminal", "ShowCRLF").toInt());
    ui->pte_read->setMaximumBlockCount(ui->le_lineCount->text().toInt());

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

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updateSerial()));
    timer->start(100);
}

void SerialTerminal::on_serialTerminal_rejected() {
    MainWindow::setSettings("Serial Terminal", "inCR", QString::number(ui->cb_CR->isChecked()));
    MainWindow::setSettings("Serial Terminal", "inLF", QString::number(ui->cb_LF->isChecked()));
    MainWindow::setSettings("Serial Terminal", "ASCII", QString::number(ui->cb_ascii->isChecked()));
    MainWindow::setSettings("Serial Terminal", "UTF8", QString::number(ui->cb_utf8->isChecked()));
    MainWindow::setSettings("Serial Terminal", "HEX", QString::number(ui->cb_hex->isChecked()));
    MainWindow::setSettings("Serial Terminal", "WARP", QString::number(ui->cb_warp->isChecked()));
    MainWindow::setSettings("Serial Terminal", "AutoScroll", QString::number(ui->cb_rewind->isChecked()));
    MainWindow::setSettings("Serial Terminal", "AutoDelete", QString::number(ui->cb_autoDelete->isChecked()));
    MainWindow::setSettings("Serial Terminal", "LineCount", ui->le_lineCount->text());
    MainWindow::setSettings("Serial Terminal", "ShowCRLF", QString::number(ui->cb_hiddenCRLF->isChecked()));
    timer->stop();
    delete timer;
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
    timer->stop();  // trzeba zatrzymać timer i przestać odczytywać piny FlowControl bop nie można odczytywać podwójnie portu.
    if (COMPORT->isOpen()) {
        if (COMPORT->bytesAvailable()) {
            dataFromSerial.append(COMPORT->readAll());
        }
        if (dataFromSerial.contains(char(10))) {
            QString lineShow = dataFromSerial.left(dataFromSerial.indexOf(char(10)) + 1);
            dataFromSerial.remove(0, dataFromSerial.indexOf(char(10)) + 1);

            if (!ui->pb_startStop->isChecked()) {
                if (ui->cb_utf8->isChecked()) {
                    if (ui->cb_hiddenCRLF->isChecked()) {
                        lineShow.replace(char(13), "[CR]");
                        lineShow.replace(char(10), "[LF]\n");
                    } else {
                        lineShow.replace(char(13), "");
                        lineShow.replace(char(10), "\n");
                    }
                    ui->pte_read->insertPlainText(lineShow.toUtf8());
                }
                if (ui->cb_ascii->isChecked()) {
                    if (ui->cb_hiddenCRLF->isChecked()) {
                        lineShow.replace(char(13), "[CR]");
                        lineShow.replace(char(10), "[LF]\n");
                    } else {
                        lineShow.replace(char(13), "");
                        lineShow.replace(char(10), "\n");
                    }
                    ui->pte_read->insertPlainText(lineShow.toLatin1());
                }
                if (ui->cb_hex->isChecked()) {
                    QByteArray bytes(lineShow.toUtf8());
                    QString hexLine = bytes.toHex(' ') + "\n";
                    ui->pte_read->insertPlainText(hexLine);
                }
            }
            if (ui->cb_rewind->isChecked()) {
                ui->pte_read->ensureCursorVisible();
            }
        }
    }
    timer->start();
}

void SerialTerminal::on_pb_clear_read_clicked() {
    ui->pte_read->clear();
}

void SerialTerminal::on_pb_startStop_toggled(bool checked) {
    if (checked) {
        ui->pb_startStop->setText("Start");
    } else {
        ui->pb_startStop->setText("Stop");
    }
}

void SerialTerminal::on_cb_autoDelete_toggled(bool checked) {
    if (checked) {
        ui->pte_read->setMaximumBlockCount(ui->le_lineCount->text().toInt());
    } else {
        ui->pte_read->setMaximumBlockCount(0);
    }
}

void SerialTerminal::on_cb_warp_toggled(bool checked) {
    if (checked) {
        ui->pte_read->setLineWrapMode(QPlainTextEdit::WidgetWidth);
    } else {
        ui->pte_read->setLineWrapMode(QPlainTextEdit::NoWrap);
    }
}

void SerialTerminal::on_pb_RTS_toggled(bool checked) {
    COMPORT->setRequestToSend(checked);
}

void SerialTerminal::on_pb_DTR_toggled(bool checked) {
    COMPORT->setDataTerminalReady(checked);
}

void SerialTerminal::on_le_send_returnPressed() {
    on_pb_send_clicked();
}

void SerialTerminal::on_le_lineCount_returnPressed() {
    ui->pte_read->setMaximumBlockCount(ui->le_lineCount->text().toInt());
}

void SerialTerminal::updateSerial() {
    dataControlSignal = COMPORT->pinoutSignals();
    //    if ((0xffff & QSerialPort::PinoutSignal::RingIndicatorSignal) & dataControlSignal) {
    if ((0xffff & 0x0020) & dataControlSignal) {
        // ui->l_RI->setText("RI on");
        ui->l_RI->setStyleSheet("background-color: rgba(255, 0, 0, 255);");
    } else {
        // ui->l_RI->setText("RI off");
        ui->l_RI->setStyleSheet("background-color: rgba(255, 0, 0, 0);");
    }
    //    if ((0xffff & QSerialPort::PinoutSignal::DataCarrierDetectSignal) & dataControlSignal) {
    if ((0xffff & 0x0008) & dataControlSignal) {
        // ui->l_CD->setText("CD on");
        ui->l_CD->setStyleSheet("background-color: rgba(255, 0, 0, 255);");
    } else {
        // ui->l_CD->setText("CD off");
        ui->l_CD->setStyleSheet("background-color: rgba(255, 0, 0, 0);");
    }
    //    if ((0xffff & QSerialPort::PinoutSignal::DataSetReadySignal) & dataControlSignal) {
    if ((0xffff & 0x0010) & dataControlSignal) {
        // ui->l_DSR->setText("DSR on");
        ui->l_DSR->setStyleSheet("background-color: rgba(255, 0, 0, 255);");
    } else {
        // ui->l_DSR->setText("DSR off");
        ui->l_DSR->setStyleSheet("background-color: rgba(255, 0, 0, 0);");
    }
    //    if ((0xffff & QSerialPort::PinoutSignal::ClearToSendSignal) & dataControlSignal) {
    if ((0xffff & 0x0080) & dataControlSignal) {
        // ui->l_CTS->setText("CTS on");
        ui->l_CTS->setStyleSheet("background-color: rgba(255, 0, 0, 255);");
    } else {
        // ui->l_CTS->setText("CTS off");
        ui->l_CTS->setStyleSheet("background-color: rgba(255, 0, 0, 0);");
    }
}
