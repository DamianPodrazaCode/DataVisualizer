#ifndef NETWORKDIALOG_H
#define NETWORKDIALOG_H

#include <QDialog>

namespace Ui {
class NetworkDialog;
}

class NetworkDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NetworkDialog(QWidget *parent = nullptr);
    ~NetworkDialog();

private:
    Ui::NetworkDialog *ui;
};

#endif // NETWORKDIALOG_H
