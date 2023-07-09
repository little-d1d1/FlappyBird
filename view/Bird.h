
#ifndef BIRD_H
#define BIRD_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <qstring.h>
#include <Qtimer>

class Bird : public QWidget
{
    Q_OBJECT

public:
    Bird(QWidget *parent = 0);

    ~Bird();
    void update_birdname(const QString& bn) throw();
    void update_birdspeed(double bs) throw();
    double get_birdspeed() throw();
	void update_x(int x) throw();
	int get_x() const throw();
	void update_y(int y) throw();
	int get_y() const throw();
	void update_h(int h) throw();
	int get_h() const throw();
	void update_w(int w) throw();
	int get_w() const throw();
    void paintEvent(QPaintEvent *);

    Bird& operator=(const Bird& other) {
        if (this != &other) {
            birdname = other.birdname;
            birdspeed = other.birdspeed;
            x = other.x;
            y = other.y;
            h = other.h;
            w = other.w;
        }
        return *this;
    }

private slots:
    void birdAction();

private:
    QString birdname;
    double birdspeed;
    int x;
    int y;
    int h;
    int w;
};

#endif // BIRD_H
