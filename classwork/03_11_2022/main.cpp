#include "rectangle.h"
#include <iostream>

using namespace std;

int main() {

    Rectangle r1;
    r1.setWidth(5);
    r1.setLength(10);
    cout
        << r1.getWidth() << endl
        << r1.getLength() << endl
        << r1.getArea() << endl;

    return 0;
}