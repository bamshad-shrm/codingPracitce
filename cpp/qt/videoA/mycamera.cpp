#include "mycamera.h"
#include<QCamera>
#include<QCameraInfo>
#include<QString>

myCamera::myCamera()
{

}

bool checkCameraAvailability()
{
if (QCameraInfo::availableCameras().count() > 0)
        return true;
    else
        return false;
}

QString test()
{
    return "Hello";
}
