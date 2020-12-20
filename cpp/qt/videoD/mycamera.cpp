#include "mycamera.h"

myCamera::myCamera(QObject *parent) : QObject(parent)
{

}

void myCamera::turnOnCamera() {
    viewfinder->show();
    camera->setViewfinder(viewfinder);
    camera->setCaptureMode(QCamera::CaptureVideo);
    camera->start();
}

void myCamera::stopCamera() {
    camera->stop();
}

void myCamera::startRecord() {
    //audioSettings.setCodec("audio/amr");
    //audioSettings.setQuality(QMultimedia::HighQuality);
    //videoSettings.setResolution(640,480);
    //videoSettings.setQuality(QMultimedia::VeryHighQuality);
    //videoSettings.setFrameRate(30.0);
    videoSettings.setCodec("video/mp4");
    recorder->setAudioSettings(audioSettings);
    recorder->setVideoSettings(videoSettings);
    recorder->setOutputLocation(QUrl::fromLocalFile("/home/yellow/Desktop/pracitce/languages/cpp/qt/build-videoD-Desktop_Qt_5_9_5_GCC_64bit-Debug/testD.mp4"));
    recorder->record();
}

void myCamera::stopRecord() {
    recorder->stop();
}
