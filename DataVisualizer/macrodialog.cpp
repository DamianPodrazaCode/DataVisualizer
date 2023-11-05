#include "macrodialog.h"
#include "ui_macrodialog.h"
#include "mainwindow.h"

MacroDialog::MacroDialog(QWidget *parent) : QDialog(parent), ui(new Ui::MacroDialog) {
    ui->setupUi(this);
}

MacroDialog::~MacroDialog() {
    delete ui;
}

void MacroDialog::start(QString str) {
    this->setWindowTitle(str);
    this->show();
}

void MacroDialog::on_MacroDialog_rejected() {

}
