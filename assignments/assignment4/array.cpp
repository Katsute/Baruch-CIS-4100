#include <iostream>

using namespace std;

bool contains(int[], int, int);

int main() {
    cout << "Enter array LEN:" << endl;
    int LEN;
    cin >> LEN;
    int arr[LEN];

    for(int i = 0; i < LEN; i++) {
        cout << "Enter element " << i + 1 << ":" << endl;
        cin >> arr[i];
    }

    int value;
    cout << "Value to look for:" << endl;
    cin >> value;

    cout << "Array " << (contains(arr, LEN, value) ? "contains" : "does not contain") << " value " << value << endl;

    return 0;
}

bool contains(int arr[], int len, int value){
    for(int i = 0; i < len; i++)
        if(arr[i] == value)
            return true;
    return false;
}