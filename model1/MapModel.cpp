#include "MapModel.h"

MapModel::MapModel()
{
    map = std::make_shared<Map>();
}

std::shared_ptr<BirdInfo> MapModel::get_birdinfo() throw()
{
    return map->get_birdinfo();
}

std::shared_ptr<ObsInfo> MapModel::get_obsinfo() throw()
{
    return map->get_obsinfo();
}
std::shared_ptr<BgInfo> MapModel::get_bginfo() throw()
{
    return map->get_bginfo();
}