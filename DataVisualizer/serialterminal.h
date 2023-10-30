#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include <QDialog>
#include <QMetaEnum>
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

private:
    Ui::serialTerminal *ui;

    QSerialPort *COMPORT;
};

#endif // SERIALTERMINAL_H
