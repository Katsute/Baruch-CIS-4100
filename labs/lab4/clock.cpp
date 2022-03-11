#include "clock.h"
#include <iostream>

using namespace std;

Clock::Clock(){
    hour = minute = second = 0;
    meridian = "AM";
}

void Clock::setClock(int hour, int minute, int second, string meridian){
    this->hour     = hour;
    this->minute   = minute;
    this->second   = second;
    this->meridian = meridian;
}

void Clock::displayStandard(){
    cout << hour << ':' << minute << ':' << second << ' ' << meridian << endl;
}


void Clock::displayMilitary(){
    int hr = hour;
    if(meridian == "PM" && hr != 12)
        hr += 12;
    if(meridian == "AM" && hr == 12)
        hr = 0;
    cout << hr << ':' << minute << ':' << second << endl;
}