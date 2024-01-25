#include <bits/stdc++.h>
using namespace std;

#define QUEUE_SIZE 100

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
    int count;

public:
    Queue(int size)
    {
        arr = new int[size];
        front = 0;
        rear = 0;
        this->size = size;
        count = 0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void push(int data)
    {
        if (count == size)
        {
            return;
        }
        arr[rear] = data;
        rear = (rear + 1) % size;
        count++;
    }

    void pop()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % size;
        count--;
    }

    int top()
    {
        if (isEmpty())
        {
            return -1;
        }
        return arr[front];
    }

    bool isEmpty()
    {
        return count == 0;
    }
};

int main()
{

    return 0;
}