
#include "App.h"

App::App()
{

}

App::~App() throw()
{

}

bool App::Init()
{    
    // binding
    std::shared_ptr<BirdModel> spBirdModel(std::make_shared<BirdModel>());
    spBirdViewModel = std::make_shared<BirdViewModel>();
    spBirdViewModel->SetModel(spBirdModel);

    wndMain.bird->update_birdname(spBirdViewModel->get_birdname());
    wndMain.bird->update_birdspeed(spBirdViewModel->get_birdspeed());
    wndMain.bird->update_x(spBirdViewModel->get_x());
    wndMain.bird->update_y(spBirdViewModel->get_y());
    wndMain.bird->update_w(spBirdViewModel->get_w());
    wndMain.bird->update_h(spBirdViewModel->get_h());

    std::shared_ptr<ObstaclesModel> spObstaclesModel(std::make_shared<ObstaclesModel>());
    spObstaclesViewModel = std::make_shared<ObstaclesViewModel>();
    spObstaclesViewModel->SetModel(spObstaclesModel);

    for(int i=0; i<1000; i++)
    {
        wndMain.obs->obstacle[i]->update_obsname1(spObstaclesViewModel->get_obsname1());
        wndMain.obs->obstacle[i]->update_obsname2(spObstaclesViewModel->get_obsname2());
    }

    return true;
}

void App::Show()
{
    wndMain.show();
}

