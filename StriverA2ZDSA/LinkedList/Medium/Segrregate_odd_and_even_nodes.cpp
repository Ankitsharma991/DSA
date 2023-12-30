#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        this->val = data;
        next = NULL;
    }
};
ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *evenHead = head->next;

    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
    return head;
}

int main()
{

    return 0;
}