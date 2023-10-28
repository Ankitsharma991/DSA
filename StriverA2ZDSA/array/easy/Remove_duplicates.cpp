#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 5, 6, 9, 9, 10};
    set<int> st;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}