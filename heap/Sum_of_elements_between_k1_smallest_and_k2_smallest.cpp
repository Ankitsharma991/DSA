#include <bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int> &arr, int k)
{
    priority_queue<int> pq;
    for (auto it : arr)
    {
        pq.push(it);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    return pq.top();
}

int main()
{
    vector<int> arr;
    int k1 = 3;
    int k2 = 6;
    int k1Smallest = findKthSmallest(arr, k1);
    int k2Smallest = findKthSmallest(arr, k2);

    int sum = 0;

    for (auto it : arr)
    {
        if (it > k1Smallest && it < k2Smallest)
        {
            sum += it;
        }
    }
    cout << sum << endl;

    return 0;
}