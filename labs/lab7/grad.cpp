#include <iostream>
#include "student.cpp"

using namespace std;

class GradStudent : public Student {

    public:
        GradStudent(): GradStudent("", 0, new double[3]{0, 0, 0}) { }
        GradStudent(const string name, const int id, const double grades[3]) {
            this->name = name;
            this->id = id;
            for(int i = 0; i < 3; i++)
                this->grades[i] = grades[i];
        }

        void print() const override {
            cout
                << "Graduate{"
                << "Name=\"" << name << "\", "
                << "ID=" << id << ", "
                << "Grades=[" << grades[0] << ", " << grades[1] << ", " << grades[2] << "]}" << endl;
        }

};