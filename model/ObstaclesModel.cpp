
#include "ObstaclesModel.h"

ObstaclesModel::ObstaclesModel()
{
    // default
    obsname1 = ":/back/images/hazard1.png";
    obsname2 = ":/back/images/hazard2.png";
}

QString ObstaclesModel::get_obsname1() throw()
{
    return this->obsname1;
}

QString ObstaclesModel::get_obsname2() throw()
{
    return this->obsname2;
}