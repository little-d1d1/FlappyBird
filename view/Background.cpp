#include "Background.h"

Background::Background(QWidget *parent)
    : QWidget(parent)
{
    resize(1000,1000);
}

Background::~Background()
{

}

void Background::set_bginfo(const std::shared_ptr<BgInfo>& sp) throw()
{
    bginfo = sp;
}

void Background::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, 1000, 800, bginfo->get_bgname());
}

std::shared_ptr<BgInfo> Background::get_bginfo() const throw()
{
    return bginfo;
}
