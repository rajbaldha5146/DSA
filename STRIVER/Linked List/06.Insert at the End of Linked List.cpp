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
    // Function to insert a node at the end of the linked list
    Node* insertAtTail(Node* head, int val) {
        // Step 1: Create a new node
        Node* newNode = new Node(val);

        // Step 2: If list is empty, new node becomes head
        if (head == NULL) {
            return newNode;
        }

        // Step 3: Traverse to the last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        // Step 4: Append new node at the end
        temp->next = newNode;

        return head; // Return head (unchanged)
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

    // Insert new element at the end
    int value;
    cout << "Enter value to insert at the end: ";
    cin >> value;

    head = s.insertAtTail(head, value);

    cout << "After Insertion at End: ";
    s.printList(head);

    return 0;
}
