
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include "../view/Bird.h"
#include "../view/Obstacle.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void mousePressEvent(QMouseEvent *event);
    void MainEvent();

    Bird *bird;
    Obstacle *obs;

private:
    // temporary
    int game_state = 0;     //2表示准备阶段，1代表正在进行， 0代表已经结束
    QTimer *birdTimer;			///控制鸟运动的Timer
    QTimer *obsTimer;
};

#endif // MAINWINDOW_H
