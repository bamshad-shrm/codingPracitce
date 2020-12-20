#ifndef THREAD_H
#define THREAD_H

#include <QtCore>

class myThread : public QThread
{

    Q_OBJECT

public:

    explicit myThread(QObject *parent = 0);
    void run();
    bool Stop;

signals:
    void numberChanged(int);

public slots:

};

#endif // THREAD_H
