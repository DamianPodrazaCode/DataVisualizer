#include "networkdialog.h"
#include "ui_networkdialog.h"

NetworkDialog::NetworkDialog(QWidget *parent) : QDialog(parent), ui(new Ui::NetworkDialog) {
    ui->setupUi(this);
    ui->lDebug->setText(QString("0x%1").arg((int64_t)QThread::currentThread(), 16));
}

NetworkDialog::~NetworkDialog() {
    delete ui;
}
