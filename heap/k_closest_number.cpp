#include <bits/stdc++.h>
using namespace std;

void kClosest(vector<int> &arr, int x, int k)
{
    priority_queue<pair<int, int>> maxHp;
    for (int i = 0; i < arr.size(); i++)
    {
        maxHp.push({abs(arr[i] - x), arr[i]});
        if (maxHp.size() > k)
        {
            maxHp.pop();
        }
    }
    while (maxHp.size() != 0)
    {
        cout << maxHp.top().second << " ";
        maxHp.pop();
    }
    cout << endl;
}

int main()
{
    vector<int> arr;
    int k = 3;
    int x = 7;
    kClosest(arr, x, k);

    return 0;
}