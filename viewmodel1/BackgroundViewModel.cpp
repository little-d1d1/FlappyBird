#include "BackgroundViewModel.h"

BackgroundViewModel::BackgroundViewModel()
{

}

void BackgroundViewModel::SetModel(const std::shared_ptr<BackgroundModel>& m)
{
    this->model = m;
}

QString BackgroundViewModel::get_bgname() throw()
{
    return model->get_bgname();
}

BackgroundModel& BackgroundViewModel::get_model() throw()
{
    return *model;
}

