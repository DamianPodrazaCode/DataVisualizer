#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include <QDialog>
#include <QFuture>
#include <QSerialPort>
#include <QTimer>


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

    void on_pb_mac1_clicked();

    void on_pb_mac2_clicked();

    void on_pb_mac3_clicked();

    void on_pb_mac4_clicked();

    void on_pb_mac5_clicked();

    void on_pb_mac6_clicked();

    void on_pb_mac7_clicked();

    void on_pb_mac8_clicked();

    void on_pb_mac9_clicked();

    void on_pb_mac10_clicked();

private:
    Ui::serialTerminal *ui;
    QSerialPort *COMPORT;
    QByteArray dataFromSerial;
    uint16_t dataControlSignal;
    QTimer *timer;
};

#endif // SERIALTERMINAL_H
