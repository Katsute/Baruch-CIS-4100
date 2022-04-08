#include <iostream>
#include "car.cpp"
#include "truck.cpp"

using namespace std;

int main() {
    cout << boolalpha;

    //

    Car c = Car();

    c.print();

    c.setMake("Make");
    cout << "SET: " << c.getMake() << endl;
    c.setModel("Model");
    cout << "SET: " << c.getModel() << endl;
    c.setMileage(999);
    cout << "SET: " << c.getMileage() << endl;
    c.setPrice(49999);
    cout << "SET: " << c.getPrice() << endl;

    c.print();

    //

    Truck t = Truck("Make", "Model", 1000, 79999);

    t.print();

    t.setMake("Other Make");
    cout << "SET: " << t.getMake() << endl;
    t.setModel("Other Model");
    cout << "SET: " << t.getModel() << endl;
    t.setMileage(0);
    cout << "SET: " << t.getMileage() << endl;
    t.setPrice(109999);
    cout << "SET: " << t.getPrice() << endl;

    t.print();

    //

    cout << c.getMake() << " == " << t.getMake() << " => " << c.sameMake(&t) << endl;

    t.setMake("Make");

    cout << c.getMake() << " == " << t.getMake() << " => " << c.sameMake(&t) << endl;

    return 0;
}