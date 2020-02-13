#include <iostream>
#include <QApplication>
#include <QPushButton>
#include <QWidget>
//THE BASE
/*using namespace std;
int main(int argc, char ** argv) {
    QApplication app (argc, argv);
    QPushButton button ("Hello world !");
    button.show();
    return app.exec();
}*/

using namespace std;
int main(int argc, char ** argv) {
    ///EXERCICE 1
    /*QApplication app (argc, argv);
    QPushButton button ;
    button.setText("Hello world !");
    button.setToolTip("Youpi !");
    QFont qfont("Courrier", 16, 2);
    button.setFont(qfont);
    button.show();
    return app.exec();*/
    ///EXERCICE 2
    /*QApplication app (argc, argv);
    QPushButton button ("parent");
    QPushButton button2 ("fils");
    button.show();
    button2.show();
    return app.exec();*/
    ///EXERCICE 3
    QApplication app (argc, argv);
    QWidget widget ;
    widget.show();
    return app.exec();

    ///BONUS
    /*while(1){
        QApplication app (argc, argv);
        QPushButton button ("Hello world !");
        button.show();
        app.exec();
    }
    return 0;*/
}