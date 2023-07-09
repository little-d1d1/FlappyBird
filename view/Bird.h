
#ifndef BIRD_H
#define BIRD_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <qstring.h>
#include <Qtimer>
#include <memory>
#include "../common/Info.h"

class Bird : public QWidget
{
    Q_OBJECT

public:
    Bird(QWidget *parent = 0);

    ~Bird();
    void set_birdinfo(const std::shared_ptr<BirdInfo>& sp) throw();
    void paintEvent(QPaintEvent *);

private slots:
    void updatebird();

private:
    std::shared_ptr<BirdInfo> birdinfo;
    QTimer* birdtimer;
};

#endif // BIRD_H
