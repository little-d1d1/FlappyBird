
#ifndef BIRD_H
#define BIRD_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
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
    std::shared_ptr<BirdInfo> get_birdinfo() const throw();

private slots:
    void updatebird();

private:
    std::shared_ptr<BirdInfo> birdinfo;
    QTimer* updateTimer;
};

#endif // BIRD_H
