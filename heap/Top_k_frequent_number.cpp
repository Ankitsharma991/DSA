#include <bits/stdc++.h>
using namespace std;

void kFrequent(vector<int> &arr, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHp;
    for (auto it : mp)
    {
        minHp.push({it.second, it.first});
        if (minHp.size() > k)
        {
            minHp.pop();
        }
    }

    while (minHp.size() != 0)
    {
        cout << minHp.top().second << " ";
        minHp.pop();
    }
}

int main()
{
    vector<int> arr;
    int k = 2;
    kFrequent(arr, k);
    return 0;
}