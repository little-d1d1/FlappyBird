
#ifndef BIRDVIEWMODEL_H
#define BIRDVIEWMODEL_H

#include "../model/BirdModel.h"
#include <memory>

class BirdViewModel
{
public:
    BirdViewModel();
    
    void SetModel(const std::shared_ptr<BirdModel>& m);
    
    QString get_birdname() throw();
    double get_birdspeed() throw();
	int get_x() const throw();
	int get_y() const throw();
	int get_h() const throw();
	int get_w() const throw();
    
    BirdModel& get_model() throw();
private:
    std::shared_ptr<BirdModel> model;
    std::shared_ptr<double> birdspeed;
};

#endif // BIRDVIEWMODEL_H
