#ifndef BACKGROUNDVIEWMODEL_H
#define BACKGROUNDVIEWMODEL_H

#include "../model/BackgroundModel.h"
#include <memory>

class BackgroundViewModel
{
public:
    BackgroundViewModel();
    void SetModel(const std::shared_ptr<BackgroundModel>& m);

    QString get_bgname() throw();
    BackgroundModel& get_model() throw();

private:
    std::shared_ptr<BackgroundModel> model;
};

#endif // BACKGROUNDVIEWMODEL_H
