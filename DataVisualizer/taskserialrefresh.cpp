#include "taskserialrefresh.h"

TaskSerialRefresh::TaskSerialRefresh(QObject *parent) : QThread{parent} {
}

void TaskSerialRefresh::run() {
    while (on_off) {
        emit updateSerial_SIGNAL();
        QThread::msleep(50);
    }
}
