#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include <QDialog>
#include <QSerialPort>

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

private slots:
    void on_serialTerminal_rejected();
    void on_pb_send_clicked();
    void read_data();
    void on_pb_clear_read_clicked();
    void on_pb_startStop_toggled(bool checked);
    void on_cb_autoDelete_toggled(bool checked);
    void on_cb_warp_toggled(bool checked);

private:
    Ui::serialTerminal *ui;
    QSerialPort *COMPORT;
    QString dataFromSerial;
    bool dataReady = false;
};

#endif // SERIALTERMINAL_H
