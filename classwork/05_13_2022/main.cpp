#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream IN("../input.txt", ios::in);
    fstream OUT("../output.txt", ios::out);

    int num;
    for(int i = 0; i < 10; i++){
        IN >> num;
        OUT << num << endl;
    }

    IN.close();
    OUT.close();

    return 0;
}