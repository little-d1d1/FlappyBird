#include "Bird.h"

Bird::Bird(QWidget *parent)
    : QWidget(parent)
{
    resize(1000,1000);

    updateTimer = new QTimer(this);
    connect(updateTimer, SIGNAL(timeout()), this, SLOT(updatebird()));
    updateTimer->start(10);
}

Bird::~Bird()
{

}

void Bird::set_birdinfo(const std::shared_ptr<BirdInfo>& sp) throw()
{
    birdinfo = sp;
}

void Bird::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(birdinfo->get_x(), birdinfo->get_y(), birdinfo->get_w(), birdinfo->get_h(), birdinfo->get_birdname());
}

void Bird::updatebird()
{
    update();
}

std::shared_ptr<BirdInfo> Bird::get_birdinfo() const throw()
{
    return birdinfo;
}
