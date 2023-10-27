#include "serialdialog.h"
#include "ui_serialdialog.h"

SerialDialog::SerialDialog(QWidget *parent) : QDialog(parent), ui(new Ui::SerialDialog) {
    ui->setupUi(this);
    ui->lDebug->setText(QString("0x%1").arg((int64_t)QThread::currentThread(), 16));
}

SerialDialog::~SerialDialog() {
    delete ui;
}
