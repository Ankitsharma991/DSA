#include <bits/stdc++.h>
using namespace std;

vector<int> kSortedArray(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> minH;
    vector<int> ans;
    for (auto it : arr)
    {
        minH.push(it);
        if (minH.size() > k)
        {
            int data = minH.top();
            ans.push_back(data);
            minH.pop();
        }
        while (minH.size() == 0)
        {
            int data = minH.top();
            ans.push_back(data);
            minH.pop();
        }
    }
    return ans;
}

int main()
{
    vector<int> arr;
    int k = 3;
    kSortedArray(arr, k);
}