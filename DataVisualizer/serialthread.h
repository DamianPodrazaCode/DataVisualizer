#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H

#include <QObject>
#include <QThread>

class SerialThread : public QThread {
    Q_OBJECT

public:
    explicit SerialThread(QObject *parent = nullptr);

signals:
};

#endif // SERIALTHREAD_H
