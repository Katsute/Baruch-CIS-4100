#include "circle.h"
#include <iostream>

using namespace std;

void display(Circle);
void display(Circle, double, double);

int main() {
    cout << boolalpha;

    Circle c = Circle(0, 0, 0);
    display(c);

    {
        c.setX(1);
        c.setY(2);
        c.setRadius(3);
        display(c);
    }

    {
        c.setX(3);
        c.setY(3);
        c.setRadius(5);
        display(c);
    }

    {
        c.setX(2);
        c.setY(3);
        c.setRadius(2);
        display(c, 2, 4);
        display(c, 2, 10);
    }

    return 0;
}

void display(const Circle c) {
    cout
        << "Circle {" << endl
        << "  X: " << c.getX() << endl
        << "  Y: " << c.getY() << endl
        << "  R: " << c.getRadius() << endl
        << "  A: " << c.getArea() << endl
        << "}" << endl;
}

void display(const Circle c, const double x, const double y){
    display(c);
    cout
        << "Point {" << endl
        << "  X: " << x << endl
        << "  Y: " << y << endl
        << "}" << endl
        << "contains?: " << c.containsPoint(x, y) << endl;
}