#include "serialterminal.h"
#include "ui_serialterminal.h"

SerialTerminal::SerialTerminal(QWidget *parent) : QDialog(parent), ui(new Ui::serialTerminal) {
    ui->setupUi(this);
    setWindowFlags(windowFlags() | Qt::CustomizeWindowHint | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint
                   | Qt::WindowCloseButtonHint);
}

SerialTerminal::~SerialTerminal() {
    delete ui;
}
