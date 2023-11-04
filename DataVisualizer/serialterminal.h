#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include "taskserialrefresh.h"
#include <QDialog>
#include <QSerialPort>
#include <QThread>

namespace Ui {
class serialTerminal;
}

class SerialTerminal : public QDialog {
    Q_OBJECT

public:
    explicit SerialTerminal(QWidget *parent = nullptr);
    ~SerialTerminal();

    QString PortName;
    QString BaudRate;
    QString DataBits;
    QString Direction;
    QString FlowControl;
    QString Parity;
    QString StopBits;

    void start();
    static void taskControlSignals(QSerialPort *port, uint16_t *data);

signals:

private slots:
    void on_serialTerminal_rejected();
    void on_pb_send_clicked();
    void read_data();
    void on_pb_clear_read_clicked();
    void on_pb_startStop_toggled(bool checked);
    void on_cb_autoDelete_toggled(bool checked);
    void on_cb_warp_toggled(bool checked);
    void on_pb_RTS_toggled(bool checked);
    void on_pb_DTR_toggled(bool checked);
    void on_le_send_returnPressed();
    void on_le_lineCount_returnPressed();

    void updateSerial();

private:
    Ui::serialTerminal *ui;
    QSerialPort *COMPORT;
    QByteArray dataFromSerial;
    uint16_t dataControlSignal;
    TaskSerialRefresh *taskSerialSignals;
};

#endif // SERIALTERMINAL_H
