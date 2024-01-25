#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int data)
    {
        this->val = data;
        next = NULL;
        prev = NULL;
    }
};

ListNode *removeDuplicates(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        ListNode *nextNode = temp->next;
        while (nextNode != NULL && nextNode->val == temp->val)
        {
            ListNode *duplicate = nextNode;
            nextNode = nextNode->next;
            free(duplicate);
        }
        temp->next = nextNode;
        if (nextNode != NULL)
            nextNode->prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{

    return 0;
}