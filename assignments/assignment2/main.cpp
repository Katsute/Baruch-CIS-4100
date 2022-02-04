#include <iostream>

using namespace std;

int main() {
    float temp = -1;

    cout << "Temperature:";
    cin >> temp;

    if(!cin.good()){
        cout << "ERR: invalid temperature";
        return -1;
    }

    bool rainOrSnow;
    char yn;

    cout << "Raining or Snowing? (Y/N)" << endl;
    cin >> yn;
    rainOrSnow = yn == 'Y' || yn == 'y';

    cout << "Activity: ";
    if(temp >= 80)
        cout << (rainOrSnow ? "Movie" : "Beach Volleyball") << endl;
    else if (temp >= 32)
        cout << (rainOrSnow ? "Racquetball" : "Running") << endl;
    else
        cout << (rainOrSnow ? "Skiing" : "Ice Fishing") << endl;

    return 0;
}