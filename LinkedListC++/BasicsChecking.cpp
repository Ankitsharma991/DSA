#include "Intro.cpp"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);
    removeLast(head);
    display(head);
    removeFirst(head);
    display(head);
    removeElement(head, 9);
    node *newHead = reverseLL(head);
    // display(newHead);
    node *recurRev = recursiveReverse(head);
    // display(recurRev);
    // cout << search(head, 5) << endl;
    return 0;
}