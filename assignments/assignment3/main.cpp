#include <iostream>

using namespace std;

void menu();

void add(double, double);
void sub(double, double);
void mtp(double, double);
void div(double, double);

int main(){
    int IN;
    do{
        menu();

        cout << endl << "Enter a Choice: ";
        cin >> IN; // assume IN is a valid integer

        double x, y;
        if(IN != 5){
            cout << "Enter number 1: ";
            cin >> x;
            cout << "Enter number 2: ";
            cin >> y;
        }

        if(IN == 1)
            add(x, y);
        else if(IN == 2)
            sub(x, y);
        else if(IN == 3)
            mtp(x, y);
        else if(IN == 4)
            div(x, y);
        cout << endl;
    }while(IN != 5);

    cout
        << "Exiting..." << endl
        << "Thank you for using the C++ Console Calculator" << endl;

    return 0;
}

void menu(){
    cout << "Main Menu"         << endl
         << "1: Addition"       << endl
         << "2: Subtraction"    << endl
         << "3: Multiplication" << endl
         << "4: Division"       << endl
         << "5: Exit"           << endl;
}

void add(double x, double y){
    cout << "The Answer is: " << (x+y) << endl;
}

void sub(double x, double y){
    cout << "The Answer is: " << (x-y) << endl;
}

void mtp(double x, double y){
    cout << "The Answer is: " << (x*y) << endl;
}

void div(double x, double y){
    if(y == 0) // div/0
        cout << "Impossible to divide by Zero." << endl;
    else
        cout << "The Answer is: " << (x/y) << endl;
}