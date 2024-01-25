#include <bits/stdc++.h>
using namespace std;

void sortStack(stack<int> &st)
{
    if (st.size() == 1)
    {
        return;
    }
    int temp = st.top();
    st.pop();
    sortStack(st);
    insertStack(st, temp);
    return;
}

void insertStack(stack<int> &st, int temp)
{
    if (st.size() == 0 || st.top() <= temp)
    {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insertStack(st, temp);
    st.push(val);
    return;
}

int main()
{

    return 0;
}