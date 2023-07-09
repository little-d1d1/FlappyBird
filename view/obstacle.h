#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QRandomGenerator>
#include <qstring.h>
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

private:
    std::shared_ptr<ObsInfo> obsinfo;

};


class Obstacle : public QWidget
{
    Q_OBJECT

public:
    Obstacle(QWidget *parent = 0);
    ~Obstacle();
    Obstacles *obstacle[1000];

private slots:
    void obsAction();

private:
    int height[1000];
};

#endif // OBSTACLE_H
