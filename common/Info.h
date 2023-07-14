#ifndef INFO_H
#define INFO_H

#include <qstring.h>
#include <memory>
#include <QRandomGenerator>
#include<QTimer>

#define MAXOBS 1000

class BgInfo
{
public:
    BgInfo() throw();
    void set_bgname(const QString& name);
    QString get_bgname() const throw();
    void set_state(int state) throw();
    int get_state() const throw();
    const int *get_height() const throw();

private:
    QString bgname;
    int game_state;
    int height[MAXOBS];
};


class BirdInfo : public QObject
{
    Q_OBJECT

public:
    BirdInfo() throw();
    void init();
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

    QTimer *birdTimer;

private:
    QString birdname;
    double birdspeed;
    int x;
    int y;
    int h;
    int w;
};


class ObsInfo : public QObject
{
    Q_OBJECT

public:
    ObsInfo() throw();
    void init();
    void set_obsname1(const QString& name);
    QString get_obsname1() const throw();
    void set_obsname2(const QString& name);
    QString get_obsname2() const throw();
    void set_x1(int x, int i) throw();
    int get_x1(int i) const throw();
    void set_x2(int x, int i) throw();
    int get_x2(int i) const throw();
    void set_y1(int y, int i) throw();
    int get_y1(int i) const throw();
    void set_y2(int y, int i) throw();
    int get_y2(int i) const throw();
    void set_h1(int h, int i) throw();
    int get_h1(int i) const throw();
    void set_h2(int h, int i) throw();
    int get_h2(int i) const throw();
    void set_w1(int w, int i) throw();
    int get_w1(int i) const throw();
    void set_w2(int w, int i) throw();
    int get_w2(int i) const throw();
    void set_score(int score) throw();
    int get_score() const throw();

    QTimer *obsTimer;

private:
    QString obsname1, obsname2;
    int score;
    int x1[MAXOBS], x2[MAXOBS];
    int y1[MAXOBS], y2[MAXOBS];
    int h1[MAXOBS], h2[MAXOBS];
    int w1[MAXOBS], w2[MAXOBS];
};

class GoInfo
{
public:
    GoInfo() throw();
    void init();
    void set_goname(const QString& name);
    QString get_goname() const throw();
    void set_x(int x) throw();
    int get_x() const throw();
    void set_y(int y) throw();
    int get_y() const throw();
    void set_h(int h) throw();
    int get_h() const throw();
    void set_w(int w) throw();
    int get_w() const throw();

private:
    QString goname;
    int x;
    int y;
    int h;
    int w;
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
    std::shared_ptr<ObsInfo> get_obsinfo() const throw();
    void set_goinfo(const std::shared_ptr<GoInfo>& info);
    std::shared_ptr<GoInfo> get_goinfo() const throw();

private:
    std::shared_ptr<BgInfo> bginfo;
    std::shared_ptr<BirdInfo> birdinfo;
    std::shared_ptr<ObsInfo> obsinfo;
    std::shared_ptr<GoInfo> goinfo;
};



#endif // INFO_H
