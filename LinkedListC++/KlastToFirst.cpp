#include "DoublyLinkedList.cpp"
#include <bits/stdc++.h>
using namespace std;



node *kAppend(node *&head, int k)
{
    node *newHead;
    node *newTail;
    node *tail = head;
    int len = length(head);
    k = k % len;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == len - k)
        {
            newTail = tail;
        }
        if (count == len - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
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
    cout << length(head) << endl;

    node *newNode = kAppend(head, 2);

    display(newNode);

    return 0;
}
