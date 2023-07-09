
#include "Bird.h"

Bird::Bird(QWidget *parent)
    : QWidget(parent)
{
    resize(1000,1000);
}

Bird::~Bird()
{

}

void Bird::update_birdname(const QString& bn) throw()
{
    this->birdname = bn;
}

void Bird::update_birdspeed(double bs) throw()
{
    this->birdspeed = bs;
}

double Bird::get_birdspeed() throw()
{
    return this->birdspeed;
}

void Bird::update_x(int x) throw()
{
    this->x = x;
}

int Bird::get_x() const throw()
{
    return this->x;
}

void Bird::update_y(int y) throw()
{
    this->y = y;
}

int Bird::get_y() const throw()
{
    return this->y;
}

void Bird::update_h(int h) throw()
{
    this->h = h;
}

int Bird::get_h() const throw()
{
    return this->h;
}

void Bird::update_w(int w) throw()
{
    this->w = w;
}

int Bird::get_w() const throw()
{
    return this->w;
}

void Bird::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(x, y, w, h, birdname);
}


 void Bird::birdAction()
 {
     //bird的运动时间。这里是决定鸟运动数度 操作难度的地方。
     this->move(this->pos().x(),this->pos().y()+birdspeed);
     this->update_birdspeed(birdspeed + 0.5);
 }
