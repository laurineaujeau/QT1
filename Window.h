//
// Created by lauri on 13/02/2020.
//

#ifndef QT1_WINDOW_H
#define QT1_WINDOW_H

#include <QWidget>
#include <QObject>
#include <QPushButton>

class Window : public QWidget{
    Q_OBJECT;
private:
    QPushButton* button3=new QPushButton;
public:

    Window(QWidget* parent=0);


};


#endif //QT1_WINDOW_H
