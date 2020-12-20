#ifndef MYCAMERA_H
#define MYCAMERA_H
#include<QString>
#include<QCamera>
#include<QCameraInfo>

class myCamera : public QCamera
{
    Q_OBJECT
public:
    QCamera QCameraObj;
    myCamera();
    QString testFunction();
    bool checkCameraAvailability();
    void turnOnCamera();
};

#endif // MYCAMERA_H
