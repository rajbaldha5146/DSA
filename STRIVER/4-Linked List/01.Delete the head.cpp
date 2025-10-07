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
    // Function to delete the head node
    Node* deleteHead(Node* head) {
        // If list is empty
        if (head == NULL) {
            cout << "List is empty, nothing to delete." << endl;
            return NULL;
        }

        Node* temp = head;   // Store old head
        head = head->next;   // Move head to next node
        delete temp;         // Free memory of old head

        return head;         // Return new head
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
    // Create linked list: 10 -> 20 -> 30 -> 40 -> NULL
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Solution s;

    cout << "Original Linked List: ";
    s.printList(head);

    // Delete head node
    head = s.deleteHead(head);

    cout << "After Deleting Head: ";
    s.printList(head);

    return 0;
}
