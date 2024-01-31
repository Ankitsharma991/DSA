#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aabaaba";
    string pat = "aaba";
    map<char, int> mp;

    for (auto it : pat)
    {
        mp[it]++;
    }

    int count = mp.size();
    int size = str.length();
    int n = pat.length();
    int i = 0, j = 0;

    int ans = 0;

    while (j < size)
    {
        if (mp.find(str[j]) != mp.end())
        {
            mp[str[j]]--;
            if (mp[str[j]] == 0)
            {
                count--;
            }
        }

        if (j - i + 1 == n)
        {
            if (count == 0)
            {
                ans++;
            }

            if (mp.find(str[i]) != mp.end())
            {
                mp[str[i]]++;
                if (mp[str[i]] > 0)
                {
                    count++;
                }
            }

            i++;
        }

        j++;
    }

    cout << ans << endl;

    return 0;
}
