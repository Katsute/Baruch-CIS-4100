#include "clock.h"

int main() {
    Clock c1 = Clock();
    c1.setClock(5, 14, 56, "PM");
    c1.displayStandard();
    c1.displayMilitary();

    Clock c2 = Clock();
    c2.setClock(3, 29, 11, "AM");
    c2.displayStandard();
    c2.displayMilitary();

    return 0;
}