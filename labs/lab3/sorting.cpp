#include <iostream>

using namespace std;

void printArray(int[], int);

void swap(int&, int&);

void bubbleSort(int[], int);

int main() {
    cout << "Enter array LEN:" << endl;
    int LEN;
    cin >> LEN;
    int arr[LEN];

    for(int i = 0; i < LEN; i++) {
        cout << "Enter element " << i + 1 << ":" << endl;
        cin >> arr[i];
    }

    cout << "Unsorted array: ";
    printArray(arr, LEN);

    bubbleSort(arr, LEN);

    cout << "Sorted array: ";
    printArray(arr, LEN);

    return 0;
}

void printArray(int arr[], int size){
    cout << '[';
    for(int i = 0; i < size; i++){
        cout << arr[i];
        if(i < size - 1)
            cout << ", ";
    }
    cout << ']' << endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++) // for each number
        for(int j = 0; j < size - 1 - i; j++) // compare with each number after
            if(arr[j] > arr[j+1]) // if next number is greater
                swap(arr[j], arr[j+1]); // swap these numbers
}