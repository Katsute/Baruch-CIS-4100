#include "rectangle.h"

Rectangle::Rectangle(){
    width = length = 0.0;
}

void Rectangle::setWidth(double w){
    width = w;
}

void Rectangle::setLength(double l){
    length = l;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getLength(){
    return length;
}

double Rectangle::getArea(){
    return width * length;
}