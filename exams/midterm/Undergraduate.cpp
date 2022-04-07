#include "Student.cpp"

class Undergraduate: public Student {

    protected:
        // (4) Use year (1, 2, 3, 4) for the Undergraduate class.
        int year;

    public:
        // (9) Each class should include at least one constructor of your choice
        Undergraduate(const string name): Undergraduate(name, 0, 1) { }
        Undergraduate(const string name, const double gpa): Undergraduate(name, gpa, 1) { }
        Undergraduate(const string name, const double gpa, const int year): Student(name, gpa) {
            if(year < 1)
                this->year = 1;
            else if(year > 4)
                this->year = 4;
            else
                this->year = year;
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        int getYear() const {
            return year;
        }

        void setYear(const int year) {
            if(year < 1)
                this->year = 1;
            else if(year > 4)
                this->year = 4;
            else
                this->year = year;
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        string getType() const override {
            return "Undergraduate";
        }

};