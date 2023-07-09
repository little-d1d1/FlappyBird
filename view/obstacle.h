#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QRandomGenerator>
#include <qstring.h>

class Obstacles : public QWidget
{
    Q_OBJECT

public:
    Obstacles(QWidget *parent = 0);
    ~Obstacles();
    void update_obsname1(const QString& n) throw();
    void update_obsname2(const QString& n) throw();
    void paintEvent(QPaintEvent *);

private:
    QString obsname1, obsname2;
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
