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
    void on_pb_cancel_clicked();
    void on_pb_Save_clicked();

private:
    Ui::MacroDialog *ui;
    QString title;
};

#endif // MACRODIALOG_H
