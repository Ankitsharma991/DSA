#include <bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int> &st, int size)
{
    if (st.size() == 0)
    {
        return st;
    }
    int k = (size / 2) + 1;
    solve(st, k);
    return;
}

void solve(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s, k - 1);
    s.push(temp);
    return;
}

int main()
{

    return 0;
}