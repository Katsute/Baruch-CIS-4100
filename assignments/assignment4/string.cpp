#include <iostream>

using namespace std;

int main(){
    string str;

    cout << "Please enter a string:" << endl;

    getline(cin, str);

    int dupe = 0;
    const int len = str.length();

    for(int i = 1; i < len; i++)
        if(str[i] == str[i-1]) // if same char as previous
            dupe++;

    cout << str << " contains " << dupe << " double" << (dupe == 1 ? "" : "s") << endl;

    return 0;
}