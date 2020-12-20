#include "mynewcamera.h"

myNewCamera::myNewCamera(QObject *parent) : QObject(parent)
{

}

void myNewCamera::testFunction() {
    QCameraObj.start();
}
