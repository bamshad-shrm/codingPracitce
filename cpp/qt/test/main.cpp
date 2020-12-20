#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // QApplication(int & argc, char ** argv) is a public function of QApplication class.
    // It initializes the window system and constructs an application object with argc command line arguments in argv.
    MainWindow w; //w is an object of MainWindow class. MainWindow is a class decelared in mainwindow.h.
    w.show();

    return a.exec();
}
