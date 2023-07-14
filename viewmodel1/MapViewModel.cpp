
#include "MapViewModel.h"
#include <QDebug>

MapViewModel::MapViewModel()
{
//    model = std::make_shared<MapModel>();
}

void MapViewModel::SetModel(const std::shared_ptr<MapModel>& m)
{
    this->model = m;
}

MapModel& MapViewModel::get_model() throw()
{
    return *model;
}

std::shared_ptr<BirdInfo> MapViewModel::get_birdinfo() throw()
{
    return model->get_birdinfo();
}

std::shared_ptr<ObsInfo> MapViewModel::get_obsinfo() throw()
{
    return model->get_obsinfo();
}
std::shared_ptr<BgInfo> MapViewModel::get_bginfo() throw()
{
    return model->get_bginfo();
}

 void MapViewModel::birdAction()
 {
     //bird的运动时间。这里是决定鸟运动数度 操作难度的地方。
//    qDebug() << model->get_birdinfo()->get_y() + model->get_birdinfo()->get_birdspeed();
//    printf("here!\n");
    model->get_birdinfo()->set_y(model->get_birdinfo()->get_y() + model->get_birdinfo()->get_birdspeed());
    model->get_birdinfo()->set_birdspeed(model->get_birdinfo()->get_birdspeed()+0.5);
    //  this->move(this->pos().x(),this->pos().y()+birdspeed);
    //  this->update_birdspeed(birdspeed + 0.5);
 }
