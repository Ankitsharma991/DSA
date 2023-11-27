#include "DoublyLinkedList.cpp"
#include <bits/stdc++.h>
using namespace std;

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

node *mergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }
    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    vector<int> arr1 = {1, 4, 5, 7};
    vector<int> arr2 = {2, 3, 6};

    for (int i = 0; i < arr1.size(); i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    display(head1);
    display(head2);
    // node *merged = merge(head1, head2);
    // display(merged);
    node *rm = mergeRecursive(head1, head2);
    display(rm);
    return 0;
}