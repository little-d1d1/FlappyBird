
#include "ObstaclesViewModel.h"

ObstaclesViewModel::ObstaclesViewModel()
{

}

void ObstaclesViewModel::SetModel(const std::shared_ptr<ObstaclesModel>& m)
{
    this->model = m;
}

QString ObstaclesViewModel::get_obsname1() throw()
{
    return model->get_obsname1();
}

QString ObstaclesViewModel::get_obsname2() throw()
{
    return model->get_obsname2();
}

ObstaclesModel& ObstaclesViewModel::get_model() throw()
{
    return *model;
}
