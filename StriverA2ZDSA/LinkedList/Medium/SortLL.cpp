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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    map<ListNode *, int> mp;
    ListNode *temp1 = headA;
    while (temp1 != NULL)
    {
        mp[temp1]++;
        temp1 = temp1->next;
    }
    ListNode *temp2 = headB;
    while (temp2 != NULL)
    {
        if (mp.find(temp2) != mp.end())
        {
            return temp2;
        }
        temp2 = temp2->next;
    }
    return NULL;
}
int main()
{

    return 0;
}