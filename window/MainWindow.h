
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QKeyEvent>
#include "../view/Bird.h"
#include "../view/Obstacle.h"
#include "../view/Background.h"
#include "../view/Gameover.h"

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
    void keyPressEvent(QKeyEvent *event);
    void MainEvent();

    Bird *bird;
    Obstacles *obs;
    Background *bg;
    Gameover *go;
};

#endif // MAINWINDOW_H
