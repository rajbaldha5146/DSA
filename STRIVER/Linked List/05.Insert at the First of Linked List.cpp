#include <bits/stdc++.h>
using namespace std;

// Node structure for singly linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {
public:
    // Function to insert a node at the beginning of the linked list
    Node* insertAtHead(Node* head, int val) {

        // Step 1: Create a new node
        Node* newNode = new Node(val);

        // Step 2: Point new node to current head
        newNode->next = head;

        // Step 3: New node becomes the new head
        head = newNode;

        return head; // Return updated head
    }

    // Helper function to print linked list
    void printList(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    // Initial linked list: 10 -> 20 -> 30 -> NULL
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Solution s;

    cout << "Original Linked List: ";
    s.printList(head);

    // Insert new element at the beginning
    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    head = s.insertAtHead(head, value);

    cout << "After Insertion at Beginning: ";
    s.printList(head);

    return 0;
}
