#ifndef MACRODIALOG_H
#define MACRODIALOG_H

#include <QDialog>

namespace Ui {
class MacroDialog;
}

class MacroDialog : public QDialog {
    Q_OBJECT

public:
    explicit MacroDialog(QWidget *parent = nullptr);
    ~MacroDialog();
    void start(QString str);

private slots:
    void on_MacroDialog_rejected();

private:
    Ui::MacroDialog *ui;
};

#endif // MACRODIALOG_H
