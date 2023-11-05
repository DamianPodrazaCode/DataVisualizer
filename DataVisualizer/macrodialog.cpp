#include "macrodialog.h"
#include "mainwindow.h"
#include "ui_macrodialog.h"

MacroDialog::MacroDialog(QWidget *parent) : QDialog(parent), ui(new Ui::MacroDialog) {
    ui->setupUi(this);
}

MacroDialog::~MacroDialog() {
    delete ui;
}

void MacroDialog::start(QString str) {
    this->setWindowTitle(str);
    title = str;
    ui->le_macro->setText(MainWindow::getSettings("Serial Macro", title));
    this->show();
}

void MacroDialog::on_pb_cancel_clicked() {
    close();
}

void MacroDialog::on_pb_Save_clicked() {
    MainWindow::setSettings("Serial Macro", title, ui->le_macro->text());
    close();
}
