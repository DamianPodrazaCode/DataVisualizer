#ifndef SERIALDIALOG_H
#define SERIALDIALOG_H

#include <QDialog>
#include <QSerialPortInfo>
#include <QThread>
#include <QSettings>

namespace Ui {
class SerialDialog;
}

class SerialDialog : public QDialog {
    Q_OBJECT

public:
    explicit SerialDialog(QWidget *parent = nullptr);
    ~SerialDialog();

private slots:
    void on_pb_rescan_clicked();

    void on_cb_baudrate_currentIndexChanged(int index);
    void on_cb_databits_currentIndexChanged(int index);

private:
    Ui::SerialDialog *ui;
    void fill_cb_serialInfo();
    QStringList portInfoList;
};

#endif // SERIALDIALOG_H
