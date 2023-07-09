
#include "BirdViewModel.h"

BirdViewModel::BirdViewModel()
{

}

void BirdViewModel::SetModel(const std::shared_ptr<BirdModel>& m)
{
    this->model = m;
}

QString BirdViewModel::get_birdname() throw()
{
    return model->get_birdname();
}

double BirdViewModel::get_birdspeed() throw()
{
    return model->get_birdspeed();
}

BirdModel& BirdViewModel::get_model() throw()
{
    return *model;
}

int BirdViewModel::get_x() const throw()
{
    return model->get_x();
}

int BirdViewModel::get_y() const throw()
{
    return model->get_y();
}

int BirdViewModel::get_w() const throw()
{
    return model->get_w();
}

int BirdViewModel::get_h() const throw()
{
    return model->get_h();
}
