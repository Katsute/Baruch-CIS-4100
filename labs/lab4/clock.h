#ifndef CLOCK_H
#define CLOCK_H

#include <string>

using namespace std;

class Clock {

    private:
        int hour;
        int minute;
        int second;
        string meridian;

    public:
        Clock();
        void setClock(int hour, int minute, int second, string meridian);
        void displayStandard();
        void displayMilitary();

};

#endif