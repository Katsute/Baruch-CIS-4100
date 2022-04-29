#include <iostream>

using namespace std;

class Node {

    public:
        int data; // data

        Node* next; // pointer to next element in list

};

void display(Node* node) {
    while(node != nullptr) {
        cout << node->data << endl;
        node = node->next;
    }
}

int main() {
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();

    n1->data = 15;
    n1->next = n2;

    n2->data = -76;
    n2->next = n3;

    n3->data = 99;
    n3->next = n4;

    n4->data = 20;

    display(n1);

    return 0;
}