#include "Info.h"

//BgInfo
BgInfo::BgInfo() throw()
{
    bgname = ":/back/images/bgf.png";
    game_state = 0;
    for(int i=0; i<MAXOBS; i++)//存放障碍物偏移的数组
    {
        int randomNumber = QRandomGenerator::global()->bounded(-400, -200);//产生随机数

        int randomNumber1 = QRandomGenerator::global()->bounded(-200, 0);//产生随机数
        if(i%2==0)
            height[i] = randomNumber;
        if(i%2!=0)
            height[i] = randomNumber1;
    } 
}

void BgInfo::set_bgname(const QString& name)
{
    this->bgname = name;
}

QString BgInfo::get_bgname() const throw()
{
    return bgname;
}

void BgInfo::set_state(int state) throw()
{
    this->game_state = state;
}

int BgInfo::get_state() const throw()
{
    return game_state;
}

const int* BgInfo::get_height() const throw()
{
    return height;
}

//BirdInfo
BirdInfo::BirdInfo() throw()
{
    init();
    birdname = ":/back/images/bird.png";
    birdTimer = new QTimer(this);
}

void BirdInfo::init()
{
    x = 200;
    y = 150;
    w = 55;
    h = 55;
    birdspeed = 0;
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
    obsTimer = new QTimer(this);
    init();
}

void ObsInfo::init()
{
    score = 0;
    for(int i = 0; i < MAXOBS; i++)
    {
        x1[i] = 0;
        x1[i] = 1000 + i * 300;
        y1[i] = 0;
        w1[i] = 100;
        h1[i] = 500;
        x2[i] = 0;
        x2[i] = 1000 + i * 300;
        y2[i] = 700;
        w2[i] = 100;
        h2[i] = 500;
    }
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

void ObsInfo::set_x1(int x, int i) throw()
{
    this->x1[i] = x;
}

int ObsInfo::get_x1(int i) const throw()
{
    return x1[i];
}

void ObsInfo::set_x2(int x, int i) throw()
{
    this->x2[i] = x;
}

int ObsInfo::get_x2(int i) const throw()
{
    return x2[i];
}

void ObsInfo::set_y1(int y, int i) throw()
{
    this->y1[i] = y;
}

int ObsInfo::get_y1(int i) const throw()
{
    return y1[i];
}

void ObsInfo::set_y2(int y, int i) throw()
{
    this->y2[i] = y;
}

int ObsInfo::get_y2(int i) const throw()
{
    return y2[i];
}

void ObsInfo::set_h1(int h, int i) throw()
{
    this->h1[i] = h;
}

int ObsInfo::get_h1(int i) const throw()
{
    return h1[i];
}

void ObsInfo::set_h2(int h, int i) throw()
{
    this->h2[i] = h;
}

int ObsInfo::get_h2(int i) const throw()
{
    return h2[i];
}

void ObsInfo::set_w1(int w, int i) throw()
{
    this->w1[i] = w;
}

int ObsInfo::get_w1(int i) const throw()
{
    return w1[i];
}

void ObsInfo::set_w2(int w, int i) throw()
{
    this->w2[i] = w;
}

int ObsInfo::get_w2(int i) const throw()
{
    return w2[i];
}

void ObsInfo::set_score(int score) throw()
{
    this->score = score;
}

int ObsInfo::get_score() const throw()
{
    return score;
}

//GoInfo
GoInfo::GoInfo() throw()
{
    goname = ":/back/images/go.jpg";
    init();
}

void GoInfo::init()
{
    x = -800;
    y = 150;
    w = 500;
    h = 400;
}

void GoInfo::set_goname(const QString& name)
{
    this->goname = name;
}

QString GoInfo::get_goname() const throw()
{
    return goname;
}

void GoInfo::set_x(int x) throw()
{
    this->x = x;
}

int GoInfo::get_x() const throw()
{
    return x;
}

void GoInfo::set_y(int y) throw()
{
    this->y = y;
}

int GoInfo::get_y() const throw()
{
    return y;
}

void GoInfo::set_h(int h) throw()
{
    this->h = h;
}

int GoInfo::get_h() const throw()
{
    return h;
}

void GoInfo::set_w(int w) throw()
{
    this->w = w;
}

int GoInfo::get_w() const throw()
{
    return w;
}

//Map
Map::Map() throw()
{
    bginfo = std::make_shared<BgInfo>();
    birdinfo = std::make_shared<BirdInfo>();
    obsinfo = std::make_shared<ObsInfo>();
    goinfo = std::make_shared<GoInfo>();
}

Map::Map(const Map& b) : bginfo(b.bginfo), birdinfo(b.birdinfo), obsinfo(b.obsinfo), goinfo(b.goinfo)
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

void Map::set_goinfo(const std::shared_ptr<GoInfo>& info)
{
    this->goinfo = info;
}

std::shared_ptr<GoInfo> Map::get_goinfo() const throw()
{
    return goinfo;
}
