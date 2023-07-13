#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <Qtimer>
#include <memory>
#include "../common/Info.h"

class Gameover : public QWidget
{
    Q_OBJECT

public:
    Gameover(QWidget *parent = 0);
    ~Gameover();

    void set_goinfo(const std::shared_ptr<GoInfo>& sp) throw();
    void paintEvent(QPaintEvent *);
    std::shared_ptr<GoInfo> get_goinfo() const throw();

private slots:
    void updatego();

private:
    std::shared_ptr<GoInfo> goinfo;
    QTimer* updateTimer;
};

#endif // GAMEOVER_H
