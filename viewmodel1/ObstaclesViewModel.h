
#ifndef OBSTACLESVIEWMODEL_H
#define OBSTACLESVIEWMODEL_H

#include "../model/ObstaclesModel.h"
#include <memory>

class ObstaclesViewModel
{
public:
    ObstaclesViewModel();

    void SetModel(const std::shared_ptr<ObstaclesModel>& m);

    QString get_obsname1() throw();
    QString get_obsname2() throw();

    ObstaclesModel& get_model() throw();

private:
    std::shared_ptr<ObstaclesModel> model;
};

#endif // OBSTACLESVIEWMODEL_H
