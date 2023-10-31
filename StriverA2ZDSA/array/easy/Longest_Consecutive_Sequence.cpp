#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Hint for optimal solution:
    Sort the array and start comparing from the first element. If found sequence increase the counter by one and change the comparing value to current array element.
*/

int mostOptimal(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return 0;
    int longest = 1;

    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }

            longest = max(longest, cnt);
        }
    }
    return longest;
}

bool ls(vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> seq = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = seq.size();
    int longestCount = 1;

    for (int i = 0; i < n; i++)
    {
        int x = seq[i];
        int count = 1;
        while (ls(seq, x + 1) == true)
        {
            x += 1;
            count++;
        }
        if (count > longestCount)
        {
            longestCount = count;
        }
    }
    cout << longestCount << endl;

    cout << "By most optimal" << endl;
    cout << mostOptimal(seq) << endl;
    return 0;
}