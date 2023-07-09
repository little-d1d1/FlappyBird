#ifndef INFO_H
#define INFO_H

#include <qstring.h>
#include <memory>


class BgInfo
{
public:
    BgInfo() throw();
    BgInfo(const BgInfo& b);

    void set_bgname(const QString& name);
    QString get_bgname() const throw();

private:
    QString bgname;
};


class BirdInfo
{
public:
    BirdInfo() throw();
    BirdInfo(const BirdInfo& b);

    void set_birdname(const QString& name);
    QString get_birdname() const throw();
    void set_birdspeed(double speed) throw();
    double get_birdspeed() const throw();
    void set_x(int x) throw();
    int get_x() const throw();
    void set_y(int y) throw();
    int get_y() const throw();
    void set_h(int h) throw();
    int get_h() const throw();
    void set_w(int w) throw();
    int get_w() const throw();

private:
    QString birdname;
    double birdspeed;
    int x;
    int y;
    int h;
    int w;
};


class ObsInfo
{
public:
    ObsInfo() throw();
    ObsInfo(const ObsInfo& b);

    void set_obsname1(const QString& name);
    QString get_obsname1() const throw();
    void set_obsname2(const QString& name);
    QString get_obsname2() const throw();

private:
    QString obsname1, obsname2;
};


class Map
{
public:
    Map() throw();
    Map(const Map& b);
    void set_bginfo(const std::shared_ptr<BgInfo>& info);
    std::shared_ptr<BgInfo> get_bginfo() const throw();
    void set_birdinfo(const std::shared_ptr<BirdInfo>& info);
    std::shared_ptr<BirdInfo> get_birdinfo() const throw();
    void set_obsinfo(const std::shared_ptr<ObsInfo>& info);
    std::shared_ptr<BgInfo> get_obsinfo() const throw();

private:
    std::shared_ptr<BgInfo> bginfo;
    std::shared_ptr<BirdInfo> birdinfo;
    std::shared_ptr<ObsInfo> obsinfo;
};



#endif // INFO_H
