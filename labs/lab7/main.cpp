#include <iostream>
#include "undergrad.cpp"
#include "grad.cpp"

using namespace std;

int main() {
    cout << boolalpha;

    //

    UndergradStudent u = UndergradStudent();

    u.print();

    u.setID(3);
    u.setName("A Name");
    u.setGrade(new double[3]{50, 60, 70});

    u.print();

    //

    GradStudent g = GradStudent("Other Name", 2, new double[3]{77, 88, 99});

    g.print();

    g.setID(4);
    g.setName("Another Name");
    g.setGrade(new double[3]{42, 52, 62});

    g.print();

    //

    cout << u.getName() << " == " << g.getName() << " => " << u.sameName(&g) << endl;

    g.setName("A Name");

    cout << u.getName() << " == " << g.getName() << " => " << u.sameName(&g) << endl;

    return 0;
}