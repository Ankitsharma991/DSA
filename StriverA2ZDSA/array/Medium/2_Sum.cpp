#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Better optimal
string read(vector<int> &a, int target)
{
    map<int, int> mp;
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int p = a[i];
        int more = target - p;
        if (mp.find(more) != mp.end())
        {
            return "YES";
        }
        mp[p] = i;
    }
    return "NO";
}

// Two pointer approach
void twoPointer(vector<int> &v, int target)
{
    sort(v.begin(), v.end());
    int s = 0;
    int e = v.size() - 1;
    bool result = false;

    while (s < e)
    {
        if (v[s] + v[e] == target)
        {
            result = true;
            break;
        }
        if (v[e] + v[s] < target)
        {
            s++;
        }
        e--;
    }

    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {

        cout << "NO" << endl;
    }
}

int main()
{
    // Brute Force
    vector<int> nums = {2, 5, 6, 4, 7, 8};
    int target = 11;

    int n = nums.size();
    int a = -1, b = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                a = i;
                b = j;
                break;
            }
        }
    }
    cout << read(nums, target) << endl;
    // cout << a << " " << b << endl;
    twoPointer(nums, target);
    return 0;
}