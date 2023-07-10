
#include "window/MainWindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(1000, 800);

    bird = new Bird(this);
    birdTimer = new QTimer(this);

    obs = new Obstacle(this);
    obsTimer = new QTimer(this);

    connect(birdTimer, SIGNAL(timeout()), bird, SLOT(birdAction()));
    connect(obsTimer, SIGNAL(timeout()), obs, SLOT(obsAction()));
}

MainWindow::~MainWindow()
{
    
}

 void MainWindow::mousePressEvent(QMouseEvent *event)
 {
     if((event->button()==Qt::LeftButton) && game_state==0)
     {
         game_state = 2;
         MainEvent();
     }

     else if((event->button()==Qt::LeftButton) && game_state==1)
     {
         MainEvent();
     }
 }

 void MainWindow::MainEvent()
 {
     if(game_state==2)//准备阶段吗
     {

//         lost->move(-800,150);
//         for(int i=0; i<1000; i++)
//         {
//             obs[i]->move(1600 + i*300, 0);
//         }

         game_state = 1;
         birdTimer->start(15);
         obsTimer->start(4);
         bird->update_birdspeed(1);

     }

     else if(game_state==1)//正在进行
     {
         bird->update_birdspeed(-8);
     }

 }
