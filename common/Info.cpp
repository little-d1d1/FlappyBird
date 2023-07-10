#include "Info.h"

BirdInfo::BirdInfo() throw() : x(0.0), y(0.0), h(0.0), w(0.0)
{

}

BirdInfo::BirdInfo(const BirdInfo& b) : name(b.name), x(b.x), y(b.y), h(b.h), w(b.w)
{

}

void BirdInfo::set_Name(const QString& name)
{
    this->name = name;
}

const QString& BirdInfo::get_Name() const throw()
{
    return this->name;
}

void BirdInfo::set_x(int x) throw()
{
    this->x = x;
}

int BirdInfo::get_x() const throw()
{
    return this->x;
}

void BirdInfo::set_y(int y) throw()
{
    this->y = y;
}

int BirdInfo::get_y() const throw()
{
    return this->y;
}

void BirdInfo::set_h(int h) throw()
{
    this->h = h;
}

int BirdInfo::get_h() const throw()
{
    return this->h;
}

void BirdInfo::set_w(int w) throw()
{
    this->w = w;
}

int BirdInfo::get_w() const throw()
{
    return this->w;
}

