#pragma once // prevent redefinition
#include <iostream>

using namespace std;

class Person {

    protected:
        // (1) Use name as the only data member for the Person class
        string name;

        static string tolower(const string s) {
            string buf = s;
            for(int i = 0; i < s.length(); i++)
                buf[i] = std::tolower(buf[i]);
            return buf;
        }

    public:
        // (9) Each class should include at least one constructor of your choice
        Person(const string name){
            this->name = name;
        }

        // (8) Write getters and setters methods for each and
        //     every private attribute for all the classes
        string getName() const {
            return name;
        }

        void setName(const string name) {
            this->name = name;
        }

        // (13) Use the concept of redefinition/overriding using a
        //      method of your choice.
        virtual string getType() const {
            return "Person";
        }

};