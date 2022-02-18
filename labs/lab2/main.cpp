#include <iostream>

using namespace std;

int main() {

    double IN = -1;

    double grades = 0;
    double sum = 0;
    double min = 0;
    double max = 0;

    bool first = true; // first input is automatically the min and max

    while(true){
        cout << "Enter grade (-999 to exit):" << endl;
        cin >> IN;

        if(IN == -999) break; // exit condition

        grades++; // # of grades

        sum += IN; // sum

        if(IN < min || first) min = IN; // min

        if(IN > max || first) max = IN; // max

        first = false;
    }

    cout
        << "Grades: " << grades << endl
        << "Sum: " << sum << endl
        << "Mean: " << (sum/grades) << endl // mean
        << "Min: " << min << endl
        << "Max: " << max << endl;

    return 0;
}