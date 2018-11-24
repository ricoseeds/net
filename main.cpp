#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Create a scene
    QGraphicsScene *scene = new QGraphicsScene();

    // Create an item to put to scene
    QGraphicsRectItem *rect = new QGraphicsRectItem();
    rect -> setRect(0, 0, 100, 100);

    // Add item to scene
    scene -> addItem(rect);

    // Add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view -> show();


    return a.exec();
}
