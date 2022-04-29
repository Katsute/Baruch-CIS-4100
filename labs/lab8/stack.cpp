#include <iostream>
#include <stack>

using namespace std;

// LIFO
void display(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(11);
    s.push(-55);
    s.push(100);
    s.push(17);
    s.push(49);

    cout << "display: ";

    display(s);

    cout << "size: " << s.size() << endl;
    cout << "top: " << s.top() << endl;

    s.pop();
    s.pop();

    cout << "display after pops: ";

    display(s);

    return 0;
}