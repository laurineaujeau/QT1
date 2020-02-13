#include <iostream>
#include <QApplication>
#include <QPushButton>

using namespace std;
int main(int argc, char ** argv) {
    QApplication app (argc, argv);
    QPushButton button ("Hello world !");
    button.show();
    return app.exec();
    int i=0;
    cout<<"OLALA CA MARCHE pas ..."<<endl;
    /*while(1){
        QApplication app (argc, argv);
        QPushButton button ("Hello world !");
        button.show();
        app.exec();
    }
    return 0;*/
}