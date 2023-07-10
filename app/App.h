
#ifndef APP_H
#define APP_H

#include "../window/MainWindow.h"
#include "../viewmodel/BirdViewModel.h"
#include "../viewmodel/ObstaclesViewModel.h"

class App
{
public:
    App();
    ~App() throw();

    bool Init();
    void Show();
private:
    MainWindow  wndMain;
    std::shared_ptr<BirdViewModel>  spBirdViewModel;
    std::shared_ptr<ObstaclesViewModel>  spObstaclesViewModel;
};

#endif // APP_H
