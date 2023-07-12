#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <memory>
#include "../common/Info.h"

class Obstacles : public QWidget
{
    Q_OBJECT

public:
    Obstacles(QWidget *parent = 0);
    ~Obstacles();
    void set_obsinfo(const std::shared_ptr<ObsInfo>& sp) throw();
    void paintEvent(QPaintEvent *);
    std::shared_ptr<ObsInfo> get_obsinfo() const throw();

private slots:
    void updateobs();

private:
    std::shared_ptr<ObsInfo> obsinfo;
    QTimer* updateTimer;
};

#endif // OBSTACLE_H
