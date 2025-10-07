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
    // Function to delete node at k-th position
    Node *deleteAtPosition(Node *head, int k)
    {

        // 1. Empty list
        if (head == NULL)
        {
            return NULL;
        }

        // 2. Delete first node
        if (k == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // 3. Traverse to kth node
        int count = 1;
        Node *temp = head;
        Node *prev = NULL;

        while (temp != NULL && count < k)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        // 4. If k is out of range
        if (temp == NULL)
            return head; // no deletion possible

        // 5. Delete kth node
        prev->next = temp->next;
        delete temp;

        return head; // return new head after deletion
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
    // Create linked list: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    Solution s;

    cout << "Original Linked List: ";
    s.printList(head);

    int k;
    cout << "Enter position to delete: ";
    cin >> k;

    head = s.deleteAtPosition(head, k);

    cout << "After Deletion: ";
    s.printList(head);

    return 0;
}
