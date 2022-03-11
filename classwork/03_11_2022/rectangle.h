#ifndef RECTANGLE_H // if no def then:
#define RECTANGLE_H // define header

class Rectangle {

    private:
        double width;
        double length;

    public:
        Rectangle();
        void setWidth(double w);
        void setLength(double l);
        double getWidth();
        double getLength();
        double getArea();

};

#endif