#include "Info.h"

//BgInfo
BgInfo::BgInfo() throw()
{
    bgname = ":/back/images/bgf.png";
}

BgInfo::BgInfo(const BgInfo& b) : bgname(b.bgname)
{

}

void BgInfo::set_bgname(const QString& name)
{
    this->bgname = name;
}

QString BgInfo::get_bgname() const throw()
{
    return bgname;
}

//BirdInfo
BirdInfo::BirdInfo() throw()
{
    x = 200;
    y = 150;
    w = 35;
    h = 35;
    birdspeed = 0;
    birdname = ":/back/images/bird4.png";
}

BirdInfo::BirdInfo(const BirdInfo& b) : birdname(b.birdname), birdspeed(b.birdspeed), x(b.x), y(b.y), h(b.h), w(b.w)
{

}

void BirdInfo::set_birdname(const QString& name)
{
    this->birdname = name;
}

QString BirdInfo::get_birdname() const throw()
{
    return birdname;
}

void BirdInfo::set_birdspeed(double speed) throw()
{
    this->birdspeed = speed;
}

double BirdInfo::get_birdspeed() const throw()
{
    return birdspeed;
}

void BirdInfo::set_x(int x) throw()
{
    this->x = x;
}

int BirdInfo::get_x() const throw()
{
    return x;
}

void BirdInfo::set_y(int y) throw()
{
    this->y = y;
}

int BirdInfo::get_y() const throw()
{
    return y;
}

void BirdInfo::set_h(int h) throw()
{
    this->h = h;
}

int BirdInfo::get_h() const throw()
{
    return h;
}

void BirdInfo::set_w(int w) throw()
{
    this->w = w;
}

int BirdInfo::get_w() const throw()
{
    return w;
}

//ObsInfo
ObsInfo::ObsInfo() throw()
{
    obsname1 = ":/back/images/hazard1.png";
    obsname2 = ":/back/images/hazard2.png";
}

ObsInfo::ObsInfo(const ObsInfo& b) : obsname1(b.obsname1), obsname2(b.obsname2)
{

}

void ObsInfo::set_obsname1(const QString& name)
{
    this->obsname1 = name;
}

QString ObsInfo::get_obsname1() const throw()
{
    return obsname1;
}

void ObsInfo::set_obsname2(const QString& name)
{
    this->obsname2 = name;
}

QString ObsInfo::get_obsname2() const throw()
{
    return obsname2;
}


//Map
Map::Map() throw()
{
    bginfo = std::make_shared<BgInfo>();
    birdinfo = std::make_shared<BirdInfo>();
    obsinfo = std::make_shared<ObsInfo>();
}

Map::Map(const Map& b) : bginfo(b.bginfo), birdinfo(b.birdinfo), obsinfo(b.obsinfo)
{

}

void Map::set_bginfo(const std::shared_ptr<BgInfo>& info)
{
    this->bginfo = info;
}

std::shared_ptr<BgInfo> Map::get_bginfo() const throw()
{
    return bginfo;
}

void Map::set_birdinfo(const std::shared_ptr<BirdInfo>& info)
{
    this->birdinfo = info;
}

std::shared_ptr<BirdInfo> Map::get_birdinfo() const throw()
{
    return birdinfo;
}

void Map::set_obsinfo(const std::shared_ptr<ObsInfo>& info)
{
    this->obsinfo = info;
}

std::shared_ptr<ObsInfo> Map::get_obsinfo() const throw()
{
    return obsinfo;
}

