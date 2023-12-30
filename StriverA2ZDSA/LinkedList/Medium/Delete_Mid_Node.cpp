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
int countMid(ListNode *head)
{
    int count = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count / 2;
}
ListNode *deleteMiddle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    int pos = countMid(head) - 1;
    ListNode *temp = head;

    while (pos > 0)
    {
        temp = temp->next;
        pos--;
    }
    ListNode *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    return head;
}
int main()
{

    return 0;
}