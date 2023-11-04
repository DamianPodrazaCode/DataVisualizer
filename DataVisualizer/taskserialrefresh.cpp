#include "taskserialrefresh.h"

TaskSerialRefresh::TaskSerialRefresh(QObject *parent) : QThread{parent} {
}

void TaskSerialRefresh::run() {
    while (1) {
        emit updateSerial_SIGNAL();
        QThread::msleep(500);
    }
}
