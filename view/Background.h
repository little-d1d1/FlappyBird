#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <math.h>
#include <memory>
#include "../common/Info.h"

class Background : public QWidget
{
    Q_OBJECT

public:
    Background(QWidget *parent = 0);
    ~Background();
    void set_bginfo(const std::shared_ptr<BgInfo>& sp) throw();
    void paintEvent(QPaintEvent *);
    std::shared_ptr<BgInfo> get_bginfo() const throw();

private:
    std::shared_ptr<BgInfo> bginfo;
};

#endif // BACKGROUND_H
