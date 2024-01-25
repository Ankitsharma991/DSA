#include <bits/stdc++.h>
using namespace std;

int KthLargestElement(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> minH;
    for (auto it : arr)
    {
        minH.push(it);
        if (minH.size() > k)
        {
            minH.pop();
        }
    }
    return minH.top();
}

int main()
{
    vector<int> arr = {};
    int k = 3; // 3rd largest element
    cout << KthLargestElement(arr, k) << endl;

    return 0;
}