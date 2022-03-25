#include <iostream>

using namespace std;

class Shape {

    protected: // subclass only
        int width;
        int height;

    public:
        Shape(): Shape(0, 0) {}

        Shape(int w, int h) {
            width = w;
            height = h;
        }

        void setWidth(int w) {
            width = w;
        }

        void setHeight(int h) {
            height = h;
        }

        virtual double getPerimeter() { return 0; }; // abstract method

        virtual int getSides() { return 0; }; // abstract method

};

class Rectangle: public Shape { // extend

    public:
        using Shape::Shape; // inherit constructors

        int getArea() {
            return width * height;
        }

        double getPerimeter() override { // implement abstract method
            return (width * 2) + (height * 2);
        }

        int getSides() final { // final method
            return 4;
        }

};

class Square: public Rectangle { // extend

    public:
        using Rectangle::Rectangle;

        Square(int side): Rectangle(side, side) {} // call constructor

        void setWidth(int w){
            width = height = w;
        }

        void setHeight(int h){
            height = width = h;
        }

};

class Object {};

class Box: public Object, public Rectangle { // extend multiple classes

    public:
        Box(): Rectangle(0, 0), Object() {} // multiple constructors (in this order)

};

int main() {
    Rectangle rect = Rectangle();
    rect.setWidth(10);
    rect.setHeight(20);
    cout << rect.getArea() << ", " << rect.getPerimeter() << ", " << rect.getSides() << endl;

    Square sq = Square();
    sq.setHeight(5);
    cout << sq.getArea() << ", " << sq.getPerimeter() << ", " << sq.getSides() << endl;

    return 0;
}