#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QObject>

/*Any class than can handle signals and slots must be derived from qobject*/

class Bullet: public QObject, public QGraphicsRectItem{
    Q_OBJECT// QObject macro
public:
    Bullet();
public slots:
    void move();

};

#endif // BULLET_H
