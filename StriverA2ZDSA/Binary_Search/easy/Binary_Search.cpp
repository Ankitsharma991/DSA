#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int s, int e, int target)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (e + s) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
    {
        return binarySearch(arr, s, mid - 1, target);
    }
    return binarySearch(arr, mid + 1, e, target);
}
int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int s = 0;
    int e = arr.size() - 1;
    int target = 12;
    cout << binarySearch(arr, s, e, target) << endl;
    return 0;
}