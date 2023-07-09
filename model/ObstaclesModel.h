
#ifndef OBSTACLESMODEL_H
#define OBSTACLESMODEL_H

#include <qstring.h>

class ObstaclesModel
{
public:
    ObstaclesModel();
    QString get_obsname1() throw();
    QString get_obsname2() throw();

private:
    QString obsname1, obsname2;
};

#endif // OBSTACLESMODEL_H
