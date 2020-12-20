#include <QCoreApplication>
#include <QDebug> // For debug function.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); //making QCore QCoreApplication instance called a.

    QString messge = "hello world";

    qDebug() << messge;

    return a.exec();
}
