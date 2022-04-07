#include "Employee.cpp"

class Staff : public Employee {

    protected:
        // (6) Use status (manager, nonmanager) for the Staff class.
        bool manager = false;

    public:
        // (9) Each class should include at least one constructor of your choice
        Staff(const string name, const bool manager): Staff(name, 0, manager) { }
        Staff(const string name, const double salary): Staff(name, salary, false) { }
        Staff(const string name, const double salary, const bool manager): Employee(name, salary) {
            this->manager = manager;
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        bool isManager() const {
            return manager;
        }

        void setManager(const bool manager) {
            this->manager = manager;
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        string getType() const override {
            return "Staff";
        }

};