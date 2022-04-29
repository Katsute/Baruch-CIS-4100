#include <iostream>

using namespace std;

class Node {

    public:
        Node(int data) {
            this->data = data;
        }

        int data;
        Node* next = nullptr;

        void append(int data) {
            append(new Node(data));
        }

        void append(Node* node) { // append after
            this->next = node; // set new next
        }

        void insert(int data) {
            insert(new Node(data));
        }

        void insert(Node* node) { // insert after
            node->next = this->next; // set inserted next to this next
            this->next = node; // set next to inserted
        }

        void remove(Node* prev) { // remove from
            prev->next = this->next; // set prev next to this next
        }

        void display() {
            Node* n = this;
            while(n != nullptr){
                cout << n->data << ' ';
                n = n->next;
            }
            cout << endl;
        }

};

int main() {
    // create linked list
    Node* n1 = new Node(1);
    Node* n2 = new Node(11);
    Node* n3 = new Node(22);
    Node* n4 = new Node(35);
    Node* n5 = new Node(67);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    cout << "display: ";
    n1->display();

    // append
    n5->append(89);
    cout << "append:  ";
    n1->display();
    cout << "                 added ^" << endl;

    // remove
    n2->remove(n1);
    cout << "remove:  ";
    n1->display();
    cout << "          ^ removed" << endl;

    // insert
    n1->insert(15);
    cout << "insert:  ";
    n1->display();
    cout << "           ^ inserted" << endl;

    return 0;
}