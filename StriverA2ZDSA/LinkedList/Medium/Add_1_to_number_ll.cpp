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

ListNode *reverseLinkedList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *newHead = reverseLinkedList(head->next);
    ListNode *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

ListNode *addOne(ListNode *head)
{
    head = reverseLinkedList(head);
    ListNode *temp = head;
    int carry = 1;
    while (temp != NULL)
    {
        temp->data = temp->data + carry;
        if (temp->data < 10)
        {
            carry = 0;
            break;
        }
        else
        {
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }
    if (carry == 1)
    {
        ListNode *newNode = new ListNode(1);
        head = reverseLinkedList(head);
        newNode->next = head;
        return newNode;
    }
    head = reverseLinkedList(head);
    return head;
}

int main()
{

    return 0;
}