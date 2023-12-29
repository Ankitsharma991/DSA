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

ListNode *reverse(ListNode *head)
{
    ListNode *temp = head;
    ListNode *prev = NULL;
    while (temp != NULL)
    {
        ListNode *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *first = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *second = reverse(slow);

    while (second != NULL)
    {
        if (second->val != first->val)
        {
            reverse(slow);
            return false;
        }
        first = first->next;
        second = second->next;
    }

    reverse(slow);
    return true;
}
int main()
{

    return 0;
}