#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }

    Node(int data)
    {
        this->data = data;
        next = nullptr;
        back = nullptr;
    }
};

// Convert array into Doubly Link List
Node *convertArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void traversalDLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Delete head
Node *deleteHead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node *deleteKthElement(Node *head, int pos)
{
    if (head == NULL)
    {
        return NULL;
    }
    int cnt = 0;
    Node *KNode = head;
    while (KNode != NULL)
    {
        cnt++;
        if (cnt == pos)
            break;
        KNode = KNode->next;
    }

    Node *prev = KNode->back;
    Node *front = KNode->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    else if (prev == NULL)
    {
        return deleteHead(head);
    }
    else if (front == NULL)
    {
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    KNode->next = nullptr;
    KNode->back = nullptr;
    delete KNode;

    return head;
}
// remove the given node from DLL (never be head)
void removeNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == NULL)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    free(temp);
}

// insertion of Node in DLL
// insertion before head
Node *insertBeforeHead(Node *head, int val)
{
    Node *newHead = new Node(val, head, nullptr);
    head->back = newHead;
    newHead->next = head;
    newHead->back = nullptr;
    return newHead;
}

// insertion before the tail of the linked list
Node *insertBeforeTail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertBeforeHead(head, val);
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;
    return head;
}

// insert before kth element
Node *insertBeforeKth(Node *head, int val, int k)
{
    if (k == 1)
    {
        return insertBeforeHead(head, val);
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

// insert before given node (given node is never head)
void insertBeforeNode(Node *node, int val)
{
    Node *prev = node->back;
    Node *newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // conversion of array into doubly linked list
    Node *head = convertArr2DLL(arr);

    // traversing through doubly linked list
    traversalDLL(head);

    // delete first node
    head = deleteHead(head);
    traversalDLL(head);

    // delete last element
    head = deleteTail(head);
    traversalDLL(head);

    // delete kth element
    head = deleteKthElement(head, 3);
    traversalDLL(head);

    // delete the given node
    removeNode(head->next->next);
    traversalDLL(head);

    // insert a node before head
    head = insertBeforeHead(head, 10);
    traversalDLL(head);

    // insert before tail
    head = insertBeforeTail(head, 12);
    traversalDLL(head);

    // insert before kth
    head = insertBeforeKth(head, -1, 5);
    traversalDLL(head);

    // insert node before node
    insertBeforeNode(head->next->next->next, 5);
    traversalDLL(head);

    return 0;
}