#include "CircularLL.cpp"
#include <bits/stdc++.h>
using namespace std;

void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = NULL;
    for (int i = 0; i < arr.size(); i++)
    {
        insertAtTail(head, arr[i]);
    }
    // display(head);
    evenAfterOdd(head);
    // display(head);
    return 0;
}