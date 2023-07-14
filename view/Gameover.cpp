#include "Gameover.h"

Gameover::Gameover(QWidget *parent)
    : QWidget(parent)
{
    resize(1000,1000);

    updateTimer = new QTimer(this);
    connect(updateTimer, SIGNAL(timeout()), this, SLOT(updatego()));
    updateTimer->start(10);
}

Gameover::~Gameover()
{

}

void Gameover::set_goinfo(const std::shared_ptr<GoInfo>& sp) throw()
{
    goinfo = sp;
}

void Gameover::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(goinfo->get_x(), goinfo->get_y(), goinfo->get_w(), goinfo->get_h(), goinfo->get_goname());
    painter.setPen(Qt::black);
    painter.setFont(QFont("STHupo", 10));
    painter.drawText(goinfo->get_x()+70, goinfo->get_y()+400, "点击屏幕任意一处重新开始");
}

void Gameover::updatego()
{
    update();
}

std::shared_ptr<GoInfo> Gameover::get_goinfo() const throw()
{
    return goinfo;
}
