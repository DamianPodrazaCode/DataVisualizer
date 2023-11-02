#ifndef TASKCONTROLSIGNAL_H
#define TASKCONTROLSIGNAL_H

#include <QObject>
#include <QThread>
#include <QSerialPort>

class TaskControlSignal : public QThread {
    Q_OBJECT

public:
    explicit TaskControlSignal(QObject *parent = nullptr);
signals:
    void updateControlSignals_SIGNAL(QString str);
};

#endif // TASKCONTROLSIGNAL_H
