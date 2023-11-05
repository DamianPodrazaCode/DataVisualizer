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

private:
    Ui::MacroDialog *ui;
};

#endif // MACRODIALOG_H
