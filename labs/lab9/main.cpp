#include <iostream>
#include <fstream>

using namespace std;

int main() {
    bool wrongDir;
    // I. Read
    {
        ifstream IN("input.txt"); // check base directory
        wrongDir = IN.fail();
        if(wrongDir) // CLion runs the program inside /cmake-build-debug not the base directory, adjust the file path
            IN = ifstream("../input.txt");

        int arr[100] = {};

        int i = 0; // total amount of numbers
        for(int num; IN >> num && i < 100; i++) // populate array while not null
            arr[i] = num;

        IN.close();

        cout << "Read: ";
        for(int j = 0; j < i; j++) // show values
            cout << arr[j] << ' ';
        cout << endl;
    }

// II. Write
    {
        ofstream OUT(!wrongDir ? "output.txt" : "../output.txt"); // CLion runs the program inside /cmake-build-debug not the base directory, adjust the file path

        int arr[20] = {};
        srand(time(0));
        for(int i = 0; i < 20; i++) // populate array
            arr[i] = rand() % 100;

        cout << "Write: ";
        for(int i : arr) // show values
            cout << i << ' ';
        cout << endl;

        for(int i : arr) // write
            OUT << i << endl;

        OUT.close();
    }

    return 0;
}