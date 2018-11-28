#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "MyRect.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Create a scene
    QGraphicsScene *scene = new QGraphicsScene();

    // Create an item to put to scene
    MyRect *player = new MyRect();
    player -> setRect(0, 0, 100, 100);

    // Add item to scene
    scene -> addItem(player);

    //Make the item focussable
    player -> setFlag(QGraphicsItem::ItemIsFocusable);
    player -> setFocus();
    // Add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(800, 600);
    scene->setSceneRect(0, 0, 800, 600); // origin of the view
    player->setPos(view->width() / 2, view->height() - player->rect().height());



    return a.exec();
}
