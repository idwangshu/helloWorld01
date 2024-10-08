#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc,argv);
    QWidget w;
    w.setWindowTitle("Hello world!");


    QLabel textLabel;
    textLabel.resize(100,15);
    textLabel.move(150,170);
    textLabel.setText("Hello World!");
    textLabel.setParent(&w);
    textLabel.show();

    w.show();
    return app.exec();
}


