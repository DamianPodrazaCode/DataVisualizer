#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static QString getSettings(QString group, QString key);
    static void setSettings(QString group, QString key, QString value);

private slots:
    void on_actionExit_triggered();
    void on_actionSerial_triggered();
    void on_actionNetwork_triggered();

    void on_actionMacro1_triggered();

    void on_actionMacro2_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
