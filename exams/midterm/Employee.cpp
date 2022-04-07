#pragma once // prevent redefinition
#include "Person.cpp"

class Employee : public Person {

    protected:
        // (3) Use name and salary as data members for the Employee class
        double salary;

    public:
        // (9) Each class should include at least one constructor of your choice
        Employee(const string name) : Employee(name, 0) { }
        Employee(const string name, const double salary) : Person(name) {
            this->salary = salary;
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        double getSalary() const {
            return salary;
        }

        void setSalary(const double salary) {
            this->salary = salary;
        }

        // (11) Add a method in the Employee class that calculate
        //      the new salary every year, suppose that all
        //      employees get a 3% raise every year.
        void increaseSalary() {
            increaseSalary(.03);
        }

        void increaseSalary(const double rate) {
            salary *= (1 + rate);
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        string getType() const override {
            return "Employee";
        }

};