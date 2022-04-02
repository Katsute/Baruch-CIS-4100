#include "Student.cpp"

class Graduate: public Student {

    protected:
        // (5) Use goal (master, phd) for the Graduate class.
        string goal;

    public:
        // (9) Each class should include at least one constructor of your choice
        Graduate(const string name, const string goal): Graduate(name, 0, goal) { }
        Graduate(const string name, const double gpa, const string goal): Student(name, gpa) {
            this->goal = goal;
        }

        bool isMaster() const {
            return tolower(goal) == "master";
        }

        bool isPHD() const {
            return tolower(goal) == "phd";
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        string getGoal() const {
            return goal;
        }

        void setGoal(const string goal) {
            this->goal = goal;
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        string toString() const override {
            return "Undergraduate{name: " + name + ", gpa: " + to_string(gpa) + ", goal: " + goal + "}";
        }

};