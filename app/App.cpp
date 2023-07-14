
#include "App.h"

App::App()
{

}

App::~App() throw()
{

}

bool App::Init()
{    
    // objects
    std::shared_ptr<MapModel> spMapModel(std::make_shared<MapModel>());
    spMapViewModel = std::make_shared<MapViewModel>();
    spMapViewModel->SetModel(spMapModel);

    // properties
    wndMain.bg->set_bginfo(spMapViewModel->get_bginfo());
    for(int i=0; i<1000; i++)
    {
        wndMain.obs->obstacle[i]->set_obsinfo(spMapViewModel->get_obsinfo());
    }
    wndMain.bird->set_birdinfo(spMapViewModel->get_birdinfo());

    // notification
    connect(wndMain.birdTimer, SIGNAL(timeout()), spMapViewModel.get(), SLOT(birdAction()));


    return true;
}

void App::Show()
{
    wndMain.show();
}

