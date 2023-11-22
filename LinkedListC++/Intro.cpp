#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *newNode = new node(val);

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int val)
{
    if (head == NULL)
    {
        return false;
    }
    else
    {
        while (head->next != NULL)
        {
            if (head->data == val)
            {
                return true;
                head = head->next;
            }
            head = head->next;
        }
    }
    return false;
}

void removeLast(node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        head = NULL;
        return;
    }
    else
    {
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
}

void removeElement(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void removeFirst(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

// iterative Reverse
node *reverseLL(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        node *prevPtr = NULL;
        node *currPtr = head;
        node *nextPtr;

        while (currPtr != NULL)
        {
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;
            prevPtr = currPtr;
            currPtr = nextPtr;
        }
        return prevPtr;
    }
}

// Recursive reverse
node *recursiveReverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {

        node *newHead = recursiveReverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
}

