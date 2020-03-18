#include "Window.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    this->setWindowTitle("My window");
    this->setMinimumWidth(500);
    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();
    this->progressBar = new QProgressBar();
    mainLayout->addWidget(progressBar);
    this->slider = new QSlider(Qt::Horizontal);
    mainLayout->addWidget(slider);
    connect(slider,SIGNAL(valueChanged(int)),progressBar,SLOT(setValue(int)));
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);



}


