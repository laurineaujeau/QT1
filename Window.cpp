//
// Created by lauri on 13/02/2020.
//

#include "Window.h"

Window::Window(QWidget* parent) {
    button3=new QPushButton();
    button3->setFixedSize(100,50);
    button3->setGeometry(10,10,80,30);
    button3->setWindowTitle ("Titre");

}
