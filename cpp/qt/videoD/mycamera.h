#ifndef MYCAMERA_H
#define MYCAMERA_H

#include <QObject>
#include <QCamera>
#include <QCameraInfo>
#include <QMediaRecorder>
#include <QUrl>
#include <QCameraViewfinder>
#include <QCameraImageCapture>

class myCamera : public QObject
{
    Q_OBJECT
public:
    explicit myCamera(QObject *parent = nullptr);
    void turnOnCamera();
    void stopCamera();
    bool checkCameraAvailability();
    void startRecord();
    void stopRecord();

    QCamera *camera = new QCamera;
    QCameraViewfinder *viewfinder = new QCameraViewfinder();
    QMediaRecorder *recorder = new QMediaRecorder(camera);
    QAudioEncoderSettings audioSettings;
    QVideoEncoderSettings videoSettings;





signals:

public slots:
};

#endif // MYCAMERA_H
