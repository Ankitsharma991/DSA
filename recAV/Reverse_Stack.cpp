#include <bits/stdc++.h>
using namespace std;

void revStack(stack<int> &s)
{
    if (s.size() == 1)
    {
        return;
    }
    int ele = s.top();
    s.pop();
    revStack(s);
    insertEle(s, ele);
    return;
}

void insertEle(stack<int> &st, int ele)
{
    if (st.size() == 0)
    {
        st.push(ele);
        return;
    }
    int temp = st.top();
    st.pop();
    insertEle(st, ele);
    st.push(temp);
    return;
}

int main()
{

    return 0;
}