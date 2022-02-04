#include <iostream>

using namespace std;

int main() {
    float weight;

    cout << "Weight:";
    cin >> weight;

    if(!cin.good() || weight <= 0){
        cout << "ERR: invalid weight" << endl;
        return -1;
    }

    char shipping;

    cout << "Overnight shipping? (Y/N)" << endl;
    cin >> shipping;

    bool overnight = shipping == 'Y' || shipping == 'y';

    int cost;

    if(weight < 4)
        cost = overnight ? 14 : 6;
    else if(weight <= 10)
        cost = overnight ? 24 : 15;
    else
        cost = overnight ? 35 : 20;

    cout << "Cost (" << (overnight ? "overnight" : "regular") << "): $" << cost << endl;

    return 0;
}