cmake_minimum_required(VERSION 3.7)
project(QT1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(QT1 main.cpp Window.cpp WindowTest.cpp)
target_link_libraries(QT1 Qt5::Widgets)