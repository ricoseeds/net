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
    MyRect *rect = new MyRect();
    rect -> setRect(0, 0, 100, 100);

    // Add item to scene
    scene -> addItem(rect);

    //Make the item focussable
    rect -> setFlag(QGraphicsItem::ItemIsFocusable);
    rect -> setFocus();
    // Add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view -> show();


    return a.exec();
}
