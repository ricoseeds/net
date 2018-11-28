#include "MyRect.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
#include "Bullet.h"

void MyRect::keyPressEvent(QKeyEvent *event)
{
//    qDebug() << "Key is pressed" ;
    if(event->key() == Qt::Key_Left){
        if(pos().x() > 0)
            setPos(x() - 10, y());
    } else if(event->key() == Qt::Key_Right){
        if(pos().x() + 100 < 800)
            setPos(x() + 10, y());
    } else if(event->key() == Qt::Key_Space){
        Bullet *bullet = new Bullet();
        scene() -> addItem(bullet);
        bullet->setPos(x(), y());
        qDebug() << "Bullet Created";
    }
}
