#ifndef MYNEWCAMERA_H
#define MYNEWCAMERA_H

#include <QObject>
#include <QCamera>

class myNewCamera : public QObject
{
    Q_OBJECT
public:
    QCamera QCameraObj;
    explicit myNewCamera(QObject *parent = nullptr);
    void testFunction();

signals:

public slots:
};

#endif // MYNEWCAMERA_H
