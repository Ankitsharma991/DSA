#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        next = NULL;
    }
};

ListNode *middleNode(ListNode *head)
{
    ListNode *temp = head;
    ListNode *ans;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    int len = cnt / 2;

    while (head != NULL)
    {
        if (len <= 0)
        {
            return head;
        }
        len--;
        head = head->next;
    }
    return head;
}
int main()
{

    return 0;
}