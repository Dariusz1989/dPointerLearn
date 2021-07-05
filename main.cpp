#include <QApplication>
#include <QPushButton>
#include "QtOpenGLWidgets/QOpenGLWidget"
#include "lib/inherited.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    auto in = new extra::controllers::inherited();
    in->setText("hello world");
    auto w = new QOpenGLWidget();

    return QApplication::exec();
}
