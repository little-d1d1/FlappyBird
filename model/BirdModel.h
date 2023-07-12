
#ifndef BIRDMODEL_H
#define BIRDMODEL_H

#include "../common/Info.h"
#include <memory>

class BirdModel
{
public:
    BirdModel();
    QString get_birdname() throw();
    double get_birdspeed() throw();
	int get_x() const throw();
	int get_y() const throw();
	int get_h() const throw();
	int get_w() const throw();

private:
    QString birdname;
    double birdspeed;
    int x;
    int y;
    int h;
    int w;
};

#endif // BIRDMODEL_H
