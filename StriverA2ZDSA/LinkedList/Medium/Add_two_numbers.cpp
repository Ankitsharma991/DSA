#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *addTwoNumbers(ListNode *head1, ListNode *head2)
{
    ListNode *temp1 = head1;
    ListNode *temp2 = head2;
    ListNode *dum = new ListNode(-1);
    ListNode *currNode = dum;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;
        if (temp1)
        {
            sum += temp1->val;
        }
        if (temp2)
        {
            sum += temp2->val;
        }
        ListNode *newNode = new ListNode(sum % 10);
        carry = sum / 10;
        currNode->next = newNode;
        currNode = currNode->next;
        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {
            temp2 = temp2->next;
        }
    }
    if (carry)
    {
        ListNode *newNode = new ListNode(carry);
        currNode->next = newNode;
        currNode = currNode->next;
    }
    return dum->next;
}
int main()
{

    return 0;
}