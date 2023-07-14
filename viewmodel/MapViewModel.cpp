
#include "MapViewModel.h"

MapViewModel::MapViewModel()
{
    model = std::make_shared<MapModel>();
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

std::shared_ptr<GoInfo> MapViewModel::get_goinfo() throw()
{
    return model->get_goinfo();
}

void MapViewModel::birdAction()
{
    //bird的运动时间。这里是决定鸟运动数度 操作难度的地方。
   model->get_birdinfo()->set_y(model->get_birdinfo()->get_y() + model->get_birdinfo()->get_birdspeed());
   model->get_birdinfo()->set_birdspeed(model->get_birdinfo()->get_birdspeed()+0.5);
}

void MapViewModel::obsAction()
{
    for(int i=0; i<1000; i++)
    {
        int h = get_bginfo()->get_height()[i];
        get_obsinfo()->set_x1(get_obsinfo()->get_x1(i)-2, i);
        get_obsinfo()->set_y1(h, i);
        get_obsinfo()->set_x2(get_obsinfo()->get_x2(i)-2, i);
        get_obsinfo()->set_y2(h+700, i);
    }
}

void MapViewModel::Detect()
{
    int Bx = get_birdinfo()->get_x();
    int By = get_birdinfo()->get_y();

    if(Bx <= 0 || Bx >= 1000 || By >= 800)
    {
        Fail();
    }

    for(int i=0; i<1000; i++)
    {
        if((Bx>=get_obsinfo()->get_x1(i)-50 && Bx<=get_obsinfo()->get_x1(i)+100) || (Bx>=get_obsinfo()->get_x2(i)-50&&Bx<=get_obsinfo()->get_x2(i)+100))
        {
            if(By <= get_obsinfo()->get_y1(i)+500 || By >= get_obsinfo()->get_y2(i)-50)
            {
               Fail();
            }
        }
        if(Bx == get_obsinfo()->get_x1(i)) get_obsinfo()->set_score(get_obsinfo()->get_score()+1);
    }

}

void MapViewModel::Fail()
{
    get_goinfo()->set_x(250);
    get_goinfo()->set_y(150);
    get_bginfo()->set_state(0);
    get_obsinfo()->obsTimer->stop();
}
