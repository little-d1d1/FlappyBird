#include "Obstacle.h"
#include "QDebug"
Obstacles::Obstacles(QWidget *parent)
    : QWidget(parent)
{
    resize(5000,5000);

    updateTimer = new QTimer(this);
    connect(updateTimer, SIGNAL(timeout()), this, SLOT(updateobs()));
    updateTimer->start(10);
}

Obstacles::~Obstacles()
{

}

void Obstacles::set_obsinfo(const std::shared_ptr<ObsInfo>& sp) throw()
{
    obsinfo = sp;
}

void Obstacles::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    for(int i=0; i<MAXOBS; i++)
    {
        painter.drawPixmap(obsinfo->get_x1(i), obsinfo->get_y1(i), obsinfo->get_w1(i), obsinfo->get_h1(i), obsinfo->get_obsname1());
        painter.drawPixmap(obsinfo->get_x2(i), obsinfo->get_y2(i), obsinfo->get_w2(i), obsinfo->get_h2(i), obsinfo->get_obsname2());
    }

    QString score = QString::number(get_obsinfo()->get_score());
    painter.setPen(Qt::white);
    painter.setFont(QFont("STHupo", 40));
    painter.drawText(480, 100, score);
}

void Obstacles::updateobs()
{
    update();
}

std::shared_ptr<ObsInfo> Obstacles::get_obsinfo() const throw()
{
    return obsinfo;
}
