#include <bits/stdc++.h>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

// Array to Linked List
Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    // head->next = nullptr;
    return head;
}

// traverse in a linked list
void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// length of the linked list
int lengthLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// search in a linked list
bool searchLL(Node *head, int value)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}



int main()
{
    vector<int> arr = {2, 5, 8, 7};
    // Node *y = new Node(arr[0], nullptr);
    // cout << y->data << endl;

    // array into linked list
    Node *head = convertArr2LL(arr);

    // traverse into a linked list
    traverse(head);

    // length of linked list
    cout << lengthLL(head) << endl;

    // search in a linked list
    cout << (searchLL(head, 2) == 1 ? "Element Found" : "Element not found") << endl;

    // searchLL(head, 1);
    return 0;
}
