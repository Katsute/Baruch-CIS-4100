#include <iostream>
using namespace std;

string reverse(string s){
    return s == "" ? s : reverse(s.substr(1)) + s[0]; // append first char to end and repeat
}

int multiply(int x, int y){
    if(x < y)
        return multiply(y, x); // make highest num first to reduce # of loops
    else if(y != 0) // use y as loop check
        return x + multiply(x, y - 1); // add x then decrement loop y by 1
    else // y == 0, end of loop
        return 0;
}

int main(){
    // reverse
    string strs[] = {"First", "Second", "Third"};

    for(string s : strs)
        cout << s << " = " << reverse(s) << endl;

    // multiply
    int nums[] = {
        0, 1,
        2, 5,
        7, 3,
        5, 5,
        10, 12
    };

    for(int i = 0; i < 10; i+= 2)
        cout << nums[i] << " * " << nums[i + 1] << " = " << multiply(nums[i], nums[i+1]) << endl;

    return 0;
}