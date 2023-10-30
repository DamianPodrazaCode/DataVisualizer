#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include <QDialog>

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

private:
    Ui::serialTerminal *ui;
};

#endif // SERIALTERMINAL_H
