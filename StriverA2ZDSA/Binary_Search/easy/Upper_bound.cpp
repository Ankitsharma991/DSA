#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr, int target)
{
    int ub = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    return ub;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
    int s = 0;
    int target = 4;
    int e = arr.size();
    int ans = e;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > target)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << ans << endl;
    cout << upperBound(arr, target) << endl;
    return 0;
}