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
    void refreshToolTip();

private slots:
    void on_actionExit_triggered();
    void on_actionSerial_triggered();
    void on_actionNetwork_triggered();
    void on_actionMacro1_triggered();
    void on_actionMacro2_triggered();
    void on_actionMacro3_triggered();
    void on_actionMacro4_triggered();
    void on_actionMacro5_triggered();
    void on_actionMacro6_triggered();
    void on_actionMacro7_triggered();
    void on_actionMacro8_triggered();
    void on_actionMacro9_triggered();
    void on_actionMacro10_triggered();

    void on_actionMacro1_hovered();

    void on_actionMacro2_hovered();

    void on_actionMacro3_hovered();

    void on_actionMacro4_hovered();


    void on_actionMacro5_hovered();

    void on_actionMacro6_hovered();

    void on_actionMacro7_hovered();

    void on_actionMacro8_hovered();

    void on_actionMacro9_hovered();

    void on_actionMacro10_hovered();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
