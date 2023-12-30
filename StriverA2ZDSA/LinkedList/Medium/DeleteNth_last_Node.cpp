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

int nthNode(ListNode *head)
{
    int temp = 0;
    while (head != nullptr)
    {
        temp++;
        head = head->next;
    }
    return temp;
}

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int length = nthNode(head);

    if (n == length)
    {
        ListNode *newHead = head->next;
        delete head;
        return newHead;
    }

    int pos = length - n - 1;
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