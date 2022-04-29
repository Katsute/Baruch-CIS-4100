#include <iostream>
#include <queue>

using namespace std;

// FIFO
void display(queue<int> q) {
    while(!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(34);
    q.push(127);
    q.push(-98);
    q.push(0);
    q.push(55);

    cout << "display: ";

    display(q);

    cout << "size: " << q.size() << endl;
    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;

    q.pop();

    cout << "display after pop: ";

    display(q);

    return 0;
}