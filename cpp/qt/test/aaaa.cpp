#include "aaaa.h"

aaaa::aaaa()
{
    clientSocket = mySocket.nextPendingConnection();
    mySocket.incomingConnection();
}
