#include "circle.h"
#include <cmath>

Circle::Circle() {
    x = y = radius = 0;
}

Circle::Circle(const double x, const double y, const double radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void Circle::setRadius(const double radius) {
    this->radius = radius;
}

void Circle::setX(const double x) {
    this->x = x;
}

void Circle::setY(const double y) {
    this->y = y;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getX() const {
    return x;
}

double Circle::getY() const {
    return y;
}

const static double PI = 3.14;

double Circle::getArea() const {
    return pow(radius, 2) * PI;
}

bool Circle::containsPoint(const double x, const double y) const {
    return sqrt(pow(x - this->x, 2) + pow(y - this->y, 2)) <= radius;
}