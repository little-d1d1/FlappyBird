
#ifndef APP_H
#define APP_H

#include "../window/MainWindow.h"
#include "../viewmodel/MapViewModel.h"

class App : public QWidget
{
    Q_OBJECT

public:
    App();
    ~App() throw();

    bool Init();
    void Show();
private:
    MainWindow  wndMain;
    std::shared_ptr<MapViewModel> spMapViewModel;
};

#endif // APP_H
