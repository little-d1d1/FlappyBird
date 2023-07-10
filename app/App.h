
#ifndef APP_H
#define APP_H

#include "../window/MainWindow.h"
#include "../viewmodel/mapviewmodel.h"

class App
{
public:
    App();
    ~App() throw();

    bool Init();
    void Show();
private:
    MainWindow  wndMain;
    std::shared_ptr<mapviewmodel>  spmapviewmodel;
};

#endif // APP_H
