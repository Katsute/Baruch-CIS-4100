#include <iostream>
#include <iomanip>

using namespace std;

/**
 * II. Write a C++ program that manage the student’s grades.
 * (1) Starting with a fixed number of students (use 10 for simplicity)
 * (2) the user will input the grades for each student.
 * (3) The number of grades is given by the user.
 * (4) The grades are stored in an array.
 * (5) Two functions are called for each student.
 *     (6) One function will give the numeric average of their grades.
 *     (7) The other function will give a letter grade to that average.
 *         Grades are assigned on a 10-point spread.
 *         - 90-100 A
 *         - 80-89 B
 *         - 70-79 C
 *         - 60-69 D
 *         - Below 60 F
 */

float average(int[], int);
char letter(float);

int main() {
    // (1) for 10 students
    for(int i = 0; i < 10; i++){
        // (3) number of grades to input
        int len;
        cout << "Number of grades for student " << i + 1 << ":" << endl;
        cin >> len; // assume that input is valid

        // (4) declare array
        int grades[99] = {}; // no dynamic array length allowed?

        // (2) actually input the grades
        for(int j = 0; j < len; j++){
            cout << "Grade " << j + 1 << " for student " << i + 1 << ":" << endl;
            int IN;
            cin >> IN; // again assume the input is valid
            grades[j] = IN;
        }

        // (5) for each student run functions
        float avg = average(grades, len);

        cout << "Average for student " << i + 1 << ": " << int(avg) << "%" << endl; // (6)
        cout << "Grade for student " << i + 1 << ": " << letter(avg) << endl; // (7)
        cout << endl;
    }

    return 0;
}

// (6) average of grades
float average(int array[], int len){
    int sum = 0;
    for(int i = 0; i < len; i++)
        sum += array[i];
    return sum / float(len); // <- prevent int division
}

// (7) letter assignment
char letter(float grade){
    if(grade >= 90) // 90+
        return 'A';
    else if(grade >= 80) // 80-89
        return 'B';
    else if(grade >= 70) // 70-79
        return 'C';
    else if(grade >= 60) // 60-69
        return 'D';
    else // < 60
        return 'F';
}