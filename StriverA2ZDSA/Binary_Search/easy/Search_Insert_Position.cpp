#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int insertPosition(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = arr.size();

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 6};
    int target = 3;
    cout << insertPosition(arr, target) << endl;
    return 0;
}