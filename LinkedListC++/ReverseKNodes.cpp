#include <bits/stdc++.h>
#include "Intro.cpp"
using namespace std;
node *reverseK(node *&head, int k)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    int count = 0;
    while (currPtr != NULL && count < k)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reverseK(nextPtr, k);
    }
    return prevPtr;
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    
    display(head);
    node *newRevNode = reverseK(head, 2);
    display(newRevNode);
    return 0;
}