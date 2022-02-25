#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string str;

    cout << "Please enter a string:" << endl;

    getline(cin, str);

    string first = "";
    int i = 0;
    while(str[i] != ' ')
        first += str[i++];

    cout << "The first word of this string is: " << first << endl;

    // first = str.substr(0, str.find(' '));
    // cout << "The first word of this string is: " << first << endl;

    return 0;
}