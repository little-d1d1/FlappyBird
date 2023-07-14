
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
    wndMain.obs->set_obsinfo(spMapViewModel->get_obsinfo());
    wndMain.bird->set_birdinfo(spMapViewModel->get_birdinfo());
    wndMain.go->set_goinfo(spMapViewModel->get_goinfo());

    // notification
    connect(wndMain.bird->get_birdinfo()->birdTimer, SIGNAL(timeout()), spMapViewModel.get(), SLOT(birdAction()));
    connect(wndMain.obs->get_obsinfo()->obsTimer, SIGNAL(timeout()), spMapViewModel.get(), SLOT(obsAction()));
    connect(wndMain.obs->get_obsinfo()->obsTimer, SIGNAL(timeout()), spMapViewModel.get(), SLOT(Detect()));

    return true;
}

void App::Show()
{
    wndMain.show();
}

