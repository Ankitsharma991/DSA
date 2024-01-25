#include <bits/stdc++.h>
using namespace std;

int findKthSmallest(vector<int> &arr, int k)
{
    priority_queue<int> mxHp;
    for (auto it : arr)
    {
        mxHp.push(it);
        if (mxHp.size() > k)
        {
            mxHp.pop();
        }
    }
    return mxHp.top();
}

int main()
{
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3; // 3rd smallest element from the vector(arr)
    cout << findKthSmallest(arr, k) << endl;
    return 0;
}