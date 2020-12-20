#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>


class socketTest : public QObject
{
    Q_OBJECT
public:
    explicit socketTest(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SOCKETTEST_H
