// Floyd's Algorithm or Hare and Tortoise Algorithm (fast and slow pointer)

#include "Intro.cpp"
#include <bits/stdc++.h>
using namespace std;

void makeCycle(node *head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool cycleDetect(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 0);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    makeCycle(head, 3);
    // display(head);   // Creating cycle in a linked-list
    cout << cycleDetect(head) << endl;
    removeCycle(head);
    display(head);
    cout << cycleDetect(head) << endl;
    return 0;
}