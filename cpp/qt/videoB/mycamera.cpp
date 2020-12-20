#include "mycamera.h"

myCamera::myCamera()
{

}

QString myCamera::testFunction() {
    QString testString = "test function";
    return testString;
}

bool myCamera::checkCameraAvailability()
{
    if (QCameraInfo::availableCameras().count() > 0)
        return true;
    else
        return false;
}


void turnOnCamera() {

}
