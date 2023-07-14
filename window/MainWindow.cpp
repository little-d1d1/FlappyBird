#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(1000, 800);
    setWindowTitle("Flappy Bird");
    this->setWindowIcon(QIcon(":/back/images/bird.png"));

    bg = new Background(this);
    bird = new Bird(this);
    obs = new Obstacles(this);
    go = new Gameover(this);
}

MainWindow::~MainWindow()
{
    
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if((event->button()==Qt::LeftButton) && bg->get_bginfo()->get_state()==0)
    {
        bg->get_bginfo()->set_state(2);
        MainEvent();
    }

    else if((event->button()==Qt::LeftButton) && bg->get_bginfo()->get_state()==1)
    {
        MainEvent();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if((event->key()==Qt::Key_Space) && bg->get_bginfo()->get_state()==0)
    {
        bg->get_bginfo()->set_state(2);
        MainEvent();
    }

    else if((event->key()==Qt::Key_Space) && bg->get_bginfo()->get_state()==1)
    {
        MainEvent();
    }
}

void MainWindow::MainEvent()
{
    if(bg->get_bginfo()->get_state()==2)  //准备阶段
    {
        go->get_goinfo()->init();
        bird->get_birdinfo()->init();
        obs->get_obsinfo()->init();
        bg->get_bginfo()->set_state(1);
        bird->get_birdinfo()->birdTimer->start(15);
        obs->get_obsinfo()->obsTimer->start(4);
        bird->get_birdinfo()->set_birdspeed(1);
    }
    else if(bg->get_bginfo()->get_state()==1) //正在进行
    {
        bird->get_birdinfo()->set_birdspeed(-8);
    }
}
