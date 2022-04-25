cmake_minimum_required(VERSION 3.18)
project(shape)
set(SOURCES
    src/Circle.cpp
    src/Triangle.cpp    
    src/Rectangle.cpp
)
#add_executable(shapesut ${SOURCES})
add_library(ShapeLib STATIC ${SOURCES})
target_include_directories( ShapeLib PUBLIC 
   include
)
#include_directories(AFTER SYSTEM include)
add_executable(shapesut main.cpp)
target_link_libraries(shapesut ShapeLib)