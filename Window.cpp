#include "Window.h"
#include <QVBoxLayout>
#include <iostream>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    nombre = 0;
    this->setWindowTitle("My window");
    this->setMinimumWidth(500);
    QWidget* mainWidget = new QWidget();
    this->mainLayout = new QVBoxLayout();
    this->progressBar = new QProgressBar();
    this->slider = new QSlider(Qt::Horizontal);
    connect(slider,SIGNAL(valueChanged(int)),progressBar,SLOT(setValue(int)));
    this->pushButton = new QPushButton("fils");
    mainLayout->addWidget(pushButton);
    this->textEdit = new QTextEdit();
    mainLayout->addWidget(textEdit);
    connect(pushButton,SIGNAL(clicked()),this,SLOT(appuier()));
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);
}

using namespace std;
void MainWindow::appuier() {
    textEdit->append(pushButton->text());
    QString example = "example";
    char nbChar = nombre;
    example.append(nbChar);
    nombre++;
    pushButton->setText(example);
    mainLayout->addWidget(progressBar);
    mainLayout->addWidget(slider);

}


