#ifndef AAAA_H
#define AAAA_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class aaaa : public QTcpServer
{
public:
    aaaa();
    QTcpServer mySocket;
    QTcpSocket *clientSocket;
};

#endif // AAAA_H
