#ifndef TASKSERIALREFRESH_H
#define TASKSERIALREFRESH_H

#include <QObject>
#include <QThread>

class TaskSerialRefresh : public QThread {
    Q_OBJECT

public:
    explicit TaskSerialRefresh(QObject *parent = nullptr);
    void run() override;
    bool on_off = false;

signals:
     void updateSerial_SIGNAL();
};

#endif // TASKSERIALREFRESH_H
