#pragma once
#include <string>

using namespace std;

class Automobile {

    protected:
        string make, model;
        double mileage, price;

    public:
        string getMake() const {
            return make;
        }

        void setMake(const string make) {
            this->make = make;
        }

        string getModel() const {
            return model;
        }

        void setModel(const string model) {
            this->model = model;
        }

        double getMileage() const {
            return mileage;
        }

        void setMileage(const int mileage) {
            this->mileage = mileage;
        }

        double getPrice() const {
            return price;
        }

        void setPrice(const double price) {
            this->price = price;
        }

        virtual void print() const = 0;

        bool sameMake(const Automobile* automobile) const {
            return this->make == automobile->make;
        }

};