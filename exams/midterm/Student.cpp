#include "Person.cpp"

class Student : public Person {

    private:
        static const int size = 100;

    protected:
        // (2) Use name and gpa as data members for the Student class
        double gpa;
        string courses[size] = {""};

    public:
        // (9) Each class should include at least one constructor of your choice
        Student(const string name) : Student(name, 0) { }
        Student(const string name, const double gpa) : Person(name) {
            this->gpa = gpa;
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        double getGPA() const {
            return gpa;
        }

        void setGPA(const double gpa) {
            this->gpa = gpa;
        }

        // (10) Add a method in the student class to check if
        //      the student is an honor student (GPA greater than 3.85)
        bool isHonors() const {
            return gpa > 3.85;
        }

        // (12) Add a data member to the class Student that is a list
        //      of courses taken. The list must be implemented as an array,
        //      then add appropriate getter and setter.
        string* getCourses() {
            return courses;
        }

        string getCourse(const int i) const {
            if(i < 0)
                return courses[0];
            else if(i > size - 1)
                return courses[size - 1];
            else
                return courses[i];
        }

        void setCourse(const int i, const string& course) {
            if(i > 0 && i < size)
                courses[i] = course;
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        string toString() const override {
            return "Student{name: " + name + ", gpa: " + to_string(gpa) + "}";
        }

};