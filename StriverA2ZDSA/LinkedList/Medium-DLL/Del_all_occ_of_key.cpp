#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        this->val = val;
        next = NULL;
    }
};

ListNode *deleteAllOccurances(ListNode *head, int k)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        if (temp->val == k)
        {
            if (temp == head)
            {
                head = temp->next;
            }
            ListNode *nextNode = temp->next;
            ListNode *prevNode = temp->next;
            if (nextNode != NULL)
                nextNode->prev = prevNode;
            if (prevNode != NULL)
                prevNode->next = nextNode;
            free(temp);
            temp = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
int main()
{

    return 0;
}