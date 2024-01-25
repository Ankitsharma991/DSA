#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() {}

    ~MyStack() {}

    void push(int data)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);

        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        if (empty())
        {
            return -1;
        }

        int result = q1.front();
        q1.pop();

        return result;
    }
    int top()
    {
        if (empty())
        {
            return -1;
        }

        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{

    return 0;
}