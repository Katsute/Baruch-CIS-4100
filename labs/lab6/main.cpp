#include <iostream>

using namespace std;

class Point {

    protected:
        int x, y;

    public:
        Point() : Point(0, 0) { }

        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }

        void toString() const {
            cout << "Point[" << x << ", " << y << "]" << endl;
        }

};

const double PI = 3.14;

class Circle : Point {

    private:
        double r;

    public:
        Circle() : Circle(0, 0, 0) { }

        Circle(int x, int y, double r) : Point(x, y) {
            this->r = r;
        }

        double getArea() const {
            return PI * r * r;
        }

        double getCircumference() const {
            return 2 * PI * r;
        }

        void toString() const {
            cout << "Circle[center=(" << x << ", " << y << "); radius=" << r << "]" << endl;
        }

};

int main(){
    Point p = Point(5, 8);
    p.toString();

    Circle c = Circle(10, 5, 3);
    c.toString();
    cout << "Area=" << c.getArea() << endl;
    cout << "Circumference=" << c.getCircumference() << endl;
}