#include <bits/stdc++.h>
using namespace std;

// Node structure for singly linked list
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to insert node at k-th position
    Node *insertAtPosition(Node *head, int val, int k)
    {

        Node *newNode = new Node(val);
        // 1. Handle k == 1 (insert at head)
        if (k == 1)
        {
            newNode->next = head;
            head = newNode;
            return head;
        }

        // 2. Traverse to (k-1)-th node
        Node *temp = head;
        Node *prev = NULL;
        int count = 1;

        while (temp != NULL && count < k)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        // 3. Insert new node after it if (prev != NULL)
        if (prev != NULL)
        {
            prev->next = newNode;
            newNode->next = temp;
        }
        else
        {
            // If prev is NULL, k was invalid (e.g., k > length + 1)
            delete newNode; // avoid memory leak
            return head;    // return unchanged head
        }

        return head; // Return updated head
    }

    // Helper function to print linked list
    void printList(Node *head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    // Initial linked list: 10 -> 20 -> 30 -> NULL
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Solution s;

    cout << "Original Linked List: ";
    s.printList(head);

    int value, pos;
    cout << "Enter value to insert: ";
    cin >> value;
    cout << "Enter position to insert at: ";
    cin >> pos;

    head = s.insertAtPosition(head, value, pos);

    cout << "After Insertion at position " << pos << ": ";
    s.printList(head);

    return 0;
}
