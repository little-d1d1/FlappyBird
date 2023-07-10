
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
    std::shared_ptr<mapmodel> spmapmodel(std::make_shared<mapmodel>());
    spmapviewmodel = std::make_shared<mapviewmodel>();
    spmapviewmodel->SetModel(spmapmodel);

    wndMain.bird->update_birdname(spmapviewmodel->get_birdname());
    wndMain.bird->update_birdspeed(spmapviewmodel->get_birdspeed());
    wndMain.bird->update_x(spmapviewmodel->get_x());
    wndMain.bird->update_y(spmapviewmodel->get_y());
    wndMain.bird->update_w(spmapviewmodel->get_w());
    wndMain.bird->update_h(spmapviewmodel->get_h());

    for(int i=0; i<1000; i++)
    {
        wndMain.obs->obstacle[i]->update_obsname1(spmapviewmodel->get_obsname1());
        wndMain.obs->obstacle[i]->update_obsname2(spmapviewmodel->get_obsname2());
    }

    wndMain.bg->update_bgname(spmapviewmodel->get_bgname());

    return true;
}

void App::Show()
{
    wndMain.show();
}

