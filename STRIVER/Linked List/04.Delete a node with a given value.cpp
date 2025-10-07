#include <bits/stdc++.h>
using namespace std;

// Node structure
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
    // Function to delete a node with a given value (key)
    Node *deleteNode(Node *head, int key)
    {

        // 1.head is empty
        if (head == NULL)
        {
            return NULL;
        }

        // 2. first position
        if (head->data == key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // 3. find key
        Node *prev = NULL;
        Node *temp = head;

        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        // 4. temp is null
        if (temp == NULL)
        {
            cout << "Value " << key << " not found in the list!" << endl;
            return head;
        }

        // 5. let's remove key
        prev->next = temp->next;
        delete temp;

        return head; // return updated head
    }

    // Function to print linked list
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
    // Create linked list: 10 -> 20 -> 30 -> 40 -> NULL
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Solution s;
    cout << "Original Linked List: ";
    s.printList(head);

    int key;
    cout << "Enter value to delete: ";
    cin >> key;

    head = s.deleteNode(head, key);

    cout << "Updated Linked List: ";
    s.printList(head);

    return 0;
}
