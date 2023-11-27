#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

void deleteAtHead(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *toDelete = head;
    temp->next = head->next;
    head = head->next;
    delete toDelete;
}

void deletion(node *&head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 0;
    while (count != pos - 1)
    {
        temp = head->next;
        count++;
    }

    node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

