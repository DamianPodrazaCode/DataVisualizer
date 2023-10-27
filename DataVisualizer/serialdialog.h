#ifndef SERIALDIALOG_H
#define SERIALDIALOG_H

#include <QDialog>
#include <QThread>
#include <QSerialPortInfo>

namespace Ui {
class SerialDialog;
}

class SerialDialog : public QDialog {
    Q_OBJECT

public:
    explicit SerialDialog(QWidget *parent = nullptr);
    ~SerialDialog();

private:
    Ui::SerialDialog *ui;
};

#endif // SERIALDIALOG_H
