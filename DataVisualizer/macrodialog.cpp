#include "macrodialog.h"
#include "ui_macrodialog.h"

MacroDialog::MacroDialog(QWidget *parent) : QDialog(parent), ui(new Ui::MacroDialog) {
    ui->setupUi(this);
}

MacroDialog::~MacroDialog() {
    delete ui;
}
