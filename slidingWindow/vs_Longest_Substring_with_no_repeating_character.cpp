#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pwwkew";
    int size = s.length();
    int i = 0, j = 0;

    int maxLen = 0;
    unordered_map<char, int> mp;
    while (j < size)
    {
        mp[s[j]]++;
        if (mp.size() == j - i + 1)
        {
            maxLen = max(maxLen, j - i + 1);
            j++;
        }
        else if (mp.size() < j - i + 1)
        {
            while (mp.size() < j - i + 1)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout << maxLen << endl;
    return 0;
}