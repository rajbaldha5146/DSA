#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtFirst(Node* &head, int data) {
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* &head, int position, int data) {
    // Insert at first
    if (position == 1) {
        insertAtFirst(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    // Traverse to node before desired position
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node* head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *node1 = new Node(10);
    Node* head = node1;

    insertAtFirst(head, 9);   // 9 -> 10
    insertAtFirst(head, 8);   // 8 -> 9 -> 10
    insertAtFirst(head, 7);   // 7 -> 8 -> 9 -> 10

    cout << "Before inserting at position: ";
    print(head);

    insertAtPosition(head, 3, 99);  // insert 99 at position 3

    cout << "After inserting at position 3: ";
    print(head);   // 7 -> 8 -> 99 -> 9 -> 10

    return 0;
}
