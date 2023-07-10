#ifndef MAPMODEL_H
#define MAPMODEL_H

#include <qstring.h>
#include "../common/Info.h"
#include <memory>

class MapModel
{
public:
    MapModel();
	std::shared_ptr<BirdInfo> get_birdinfo() throw();
	std::shared_ptr<ObsInfo> get_obsinfo() throw();
	std::shared_ptr<BgInfo> get_bginfo() throw();

private:
    std::shared_ptr<Map> map;

};

#endif // MAPMODEL_H
