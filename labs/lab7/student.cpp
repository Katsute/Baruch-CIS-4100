#pragma once
#include <string>

using namespace std;

class Student {

    protected:
        string name;
        int id;
        double grades[3];

    public:
        string getName() const {
            return name;
        }

        void setName(const string name) {
            this->name = name;
        }

        int getID() const {
            return id;
        }

        void setID(const int id) {
            this->id = id;
        }

        double* getGrades() {
            return grades;
        }

        void setGrade(const double grades[3]) {
            for(int i = 0; i < 3; i++)
                this->grades[i] = grades[i];
        }

        virtual void print() const = 0;

        bool sameName(Student* s) const {
            return s->getName() == getName();
        }

};