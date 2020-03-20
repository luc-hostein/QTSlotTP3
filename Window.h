#ifndef QTSLOTTP3_WINDOW_H
#define QTSLOTTP3_WINDOW_H


#include <QMainWindow>
#include <QProgressBar>
#include <QSlider>
#include <QPushButton>
#include <QString>
#include <QTextEdit>
#include <QVBoxLayout>

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow(){};
private:
    int nombre;
    QVBoxLayout* mainLayout;
    QProgressBar* progressBar;
    QSlider* slider;
    int value;
    QPushButton* pushButton;
    QTextEdit* textEdit;
    public slots:
    void appuier();

};

#endif //QTSLOTTP3_WINDOW_H
