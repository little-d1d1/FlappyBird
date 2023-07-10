#include "BackgroundModel.h"

BackgroundModel::BackgroundModel()
{
    // default
    bgname = ":/back/images/bgf.png";
}

QString BackgroundModel::get_bgname() throw()
{
    return this->bgname;
}
