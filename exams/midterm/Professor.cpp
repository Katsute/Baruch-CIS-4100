#include "Employee.cpp"

class Professor : public Employee {

    protected:
        // (7) Use status (part-time, full-time) for the Professor class.
        string status;

    public:
        // (9) Each class should include at least one constructor of your choice
        Professor(const string name, const string status): Professor(name, 0, status) { }
        Professor(const string name, const double salary, const string status): Employee(name, salary) {
            this->status = status;
        }

        bool isPartTime() const {
            return tolower(status) == "part-time";
        }

        bool isFullTime() const {
            return tolower(status) == "full-time";
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        string getStatus() const {
            return status;
        }

        void setStatus(const string status) {
            this->status = status;
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        string toString() const override {
            return "Employee{name: " + name + ", salary: " + to_string(salary) + ", status: " + status + "}";
        }

};