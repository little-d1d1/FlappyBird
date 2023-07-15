#include "Obstacle.h"
#include "QDebug"
Obstacles::Obstacles(QWidget *parent)
    : QWidget(parent)
{
    resize(5000,5000);
    obsinfo = std::make_shared<ObsInfo>();
}

Obstacles::~Obstacles()
{

}

void Obstacles::set_obsinfo(const std::shared_ptr<ObsInfo>& sp) throw()
{
    obsinfo = sp;
}

void Obstacles::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, 100, 500, obsinfo->get_obsname1());

    //间隔是200

    QPainter painter1(this);
    painter1.drawPixmap(0, 700, 100, 800, obsinfo->get_obsname2());
}




Obstacle::Obstacle(QWidget *parent)
    : QWidget(parent)
{
    resize(5000,5000);
    for(int i=0; i<1000; i++)//存放障碍物偏移的数组
    {
        int randomNumber = QRandomGenerator::global()->bounded(-400, -200);//产生随机数

        int randomNumber1 = QRandomGenerator::global()->bounded(-200, 0);//产生随机数
        if(i%2==0)
            height[i] = randomNumber;
        if(i%2!=0)
            height[i] = randomNumber1;
    }  

    for(int i=0; i<1000; i++)
        obstacle[i] = new Obstacles(this);

    for(int i=0; i<1000; i++)
    {
        obstacle[i]->move(1600 + i*300, 0);
    }
}

Obstacle::~Obstacle()
{

}

 void Obstacle::obsAction()
 {
     int n = 0;
     for(int i=0; i<1000; i++)
     {
         int h = height[n++];

         obstacle[i]->move(obstacle[i]->pos().x()-1, h);
     }
 }
