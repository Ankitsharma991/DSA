#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    map<char, int> cmap;
    for (int i = 0; i < s.size(); i++)
    {
        cmap[s[i]]++;
    }

    for (auto it : cmap)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    return 0;
}