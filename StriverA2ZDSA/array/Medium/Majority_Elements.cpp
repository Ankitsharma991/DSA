#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 1, 2, 3, 2, 1, 2, 1, 2, 1, 2, 2, 2, 3};
    map<int, int> mp;

    for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second >= (a.size() / 2))
        {
            cout << it.first << endl;
            break;
        }
    }
    return 0;
}