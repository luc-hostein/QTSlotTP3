#ifndef QTSLOTTP3_WINDOW_H
#define QTSLOTTP3_WINDOW_H


#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>

class MainWindow : public QMainWindow {
Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow(){};
private:
    QProgressBar* progressBar;
    QSlider* slider;
    int value;



};

#endif //QTSLOTTP3_WINDOW_H
