#include <bits/stdc++.h>
using namespace std;
class MyQueue
{
    stack<int> st1;
    stack<int> st2;

public:
    MyQueue() {}

    ~MyQueue() {}

    void push(int x)
    {
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);

        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int pop()
    {
        if (empty())
        {
            return -1;
        }

        int result = st1.top();
        st1.pop();

        return result;
    }

    int peek()
    {
        if (empty())
        {
            return -1;
        }

        return st1.top();
    }

    bool empty()
    {
        return st1.empty();
    }
};
int main()
{

    return 0;
}