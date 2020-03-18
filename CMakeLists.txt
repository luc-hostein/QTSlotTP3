cmake_minimum_required(VERSION 3.7)
project(QTSlotTP3)


set(CMAKE_CXX_STANDARD 14) # si nécessaire
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(QTSlotTP3 main.cpp Window.h Window.cpp)
target_link_libraries(QTSlotTP3 Qt5::Widgets)