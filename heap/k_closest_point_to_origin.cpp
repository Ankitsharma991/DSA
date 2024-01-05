#include <bits/stdc++.h>
using namespace std;

void closest2Origin(vector<vector<int>> &arr, int k)
{
    priority_queue<pair<int, pair<int, int>>> maxHp;
    for (int i = 0; i < arr.size(); i++)
    {
        maxHp.push({arr[i][0] * arr[i][0] + arr[i][1] * arr[i][1], {arr[i][0], arr[i][1]}});
        if (maxHp.size() > k)
        {
            maxHp.pop();
        }
    }
    while (maxHp.size() != 0)
    {
        pair<int, int> p = maxHp.top().second;
        cout << p.first << "," << p.second << endl;
        maxHp.pop();
    }
}

int main()
{
    vector<vector<int>> arr;
    int k;
    closest2Origin(arr, k);

    return 0;
}