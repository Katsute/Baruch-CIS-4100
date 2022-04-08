#include <iostream>
#include "automobile.cpp"

using namespace std;

class Car : public Automobile {

    public:
        Car(): Car("", "", 0, 0) { }
        Car(const string make, const string model, const double mileage, const double price) {
            this->make = make;
            this->model = model;
            this->mileage = mileage;
            this->price = price;
        }

        void print() const override {
            cout
                << "Car{"
                << "Make=\"" << make << "\", "
                << "Model=\"" << model << "\", "
                << "Mileage=" << mileage << ", "
                << "Price=" << price << "}"
                << endl;
        }

};