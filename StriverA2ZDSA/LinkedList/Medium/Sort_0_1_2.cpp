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

ListNode* sort012(ListNode* head){
   ListNode* temp = head;
        int count0 = 0, count1 = 0, count2 = 0;

        while (temp != NULL) {
            if (temp->val == 0) {
                count0++;
            } else if (temp->val == 1) {
                count1++;
            } else {
                count2++;
            }
            temp = temp->next;
        }

        temp = head;

        while (temp != NULL) {
            if (count0 > 0) {
                temp->val = 0;
                count0--;
            } else if (count1 > 0) {
                temp->val = 1;
                count1--;
            } else {
                temp->val = 2;
                count2--;
            }
            temp = temp->next;
        }

        return head;
}
int main()
{

    return 0;
}