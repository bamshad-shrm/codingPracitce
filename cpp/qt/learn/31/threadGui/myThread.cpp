#include "myThread.h"
#include <QtCore>

myThread::myThread(QObject *parent) : QThread (parent)
{

}

void myThread::run() {

    for (int i=0;i<10000;i++) {

        //QMutex mutex;
        //mutex.lock();
        if(this->Stop) break;
        //mutex.unlock();

        emit numberChanged(i);

        this->msleep(100);

    }

}
