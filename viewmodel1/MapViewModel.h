
#ifndef MAPVIEWMODEL_H
#define MAPVIEWMODEL_H

#include "../model/MapModel.h"
#include "../common/Info.h"
#include <memory>
#include <QWidget>

class MapViewModel : public QWidget
{
    Q_OBJECT

public:
    MapViewModel();
    void SetModel(const std::shared_ptr<MapModel>& m);
    MapModel& get_model() throw();
	std::shared_ptr<BirdInfo> get_birdinfo() throw();
	std::shared_ptr<ObsInfo> get_obsinfo() throw();
	std::shared_ptr<BgInfo> get_bginfo() throw();

private slots:
    void birdAction();
    
private:
    std::shared_ptr<MapModel> model;
};

#endif // MAPVIEWMODEL_H
