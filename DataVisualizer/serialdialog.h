#ifndef SERIALDIALOG_H
#define SERIALDIALOG_H

#include <QDialog>
#include <QSerialPortInfo>
#include <QThread>

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

private:
    Ui::SerialDialog *ui;
    void fill_cb_serialInfo();
    QStringList portInfoList;
};

#endif // SERIALDIALOG_H
