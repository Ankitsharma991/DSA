#include "DoublyLinkedList.cpp"
#include <bits/stdc++.h>
using namespace std;

// Deletion in doubly linked-list

void removeLast(node *&head)
{
    if (head == NULL || head->next->next == NULL)
    {
        head = NULL;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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

void deletionK(node *&head, int pos)
{
    if (pos == 0)
    {
        removeFirst(head);
        return;
    }

    node *temp = head;
    int count = 0;

    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtHead(head, 0);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    // deletionK(head, 1);
    // removeLast(head);
    // removeLast(head);
    // removeFirst(head);
    display(head);

    return 0;
}