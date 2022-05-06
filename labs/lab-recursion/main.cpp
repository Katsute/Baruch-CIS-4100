#include <iostream>
using namespace std;

int binarySearch(const int array[], const int first, const int last, const int value){
    int middle;
    if(first <= last){
        middle = (first + last) / 2;
        if(array[middle] == value)
            return middle;
        else if(array[middle] < value)
            return binarySearch(array, middle + 1, last, value); // check right half
        else // middle > value
            return binarySearch(array, first, middle - 1, value); // check left half
    }
    return -1;
}

int main(){
    int value;

    const int array[] = {2, 4, 7, 11, 15, 21, 36, 43, 57, 66};

    cout << "Search: " << endl;
    cin >> value;

    int found = binarySearch(array, 0, 9, value);
    if(found == -1)
        cout << "Value: " << value << " not found" << endl;
    else
        cout << "Value: " << value << " found at " << found << endl;
    return 0;
}