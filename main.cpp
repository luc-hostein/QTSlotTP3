#include <QApplication>
#include <QPushButton>
#include "Window.h"
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{

    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}