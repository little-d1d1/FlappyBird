
#include "BirdModel.h"

BirdModel::BirdModel()
{
    x = 200;
    y = 150;
    w = 35;
    h = 35;
    birdspeed = 0;
    birdname = ":/back/images/bird4.png";
}

QString BirdModel::get_birdname() throw()
{
    return this->birdname;
}

double BirdModel::get_birdspeed() throw()
{
    return this->birdspeed;
}

int BirdModel::get_x() const throw()
{
    return this->x;
}

int BirdModel::get_y() const throw()
{
    return this->y;
}

int BirdModel::get_w() const throw()
{
    return this->w;
}

int BirdModel::get_h() const throw()
{
    return this->h;
}
