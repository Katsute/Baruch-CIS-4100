#include <iostream>
#include "automobile.cpp"

using namespace std;

class Truck : public Automobile {

    public:
        Truck(): Truck("", "", 0, 0) { }
        Truck(const string make, const string model, const double mileage, const double price) {
            this->make = make;
            this->model = model;
            this->mileage = mileage;
            this->price = price;
        }

        void print() const override {
            cout
                << "Truck{"
                << "Make=\"" << make << "\", "
                << "Model=\"" << model << "\", "
                << "Mileage=" << mileage << ", "
                << "Price=" << price << "}"
                << endl;
        }

};