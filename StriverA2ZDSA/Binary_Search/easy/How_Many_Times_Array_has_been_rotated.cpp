#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[low] <= arr[high])
        {
            if (arr[low] < ans)
            {
                ans = arr[low];
                index = low;
            }
            break;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                ans = arr[low];
                index = low;
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            if (arr[mid] < ans)
            {
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    cout << findKRotation(arr) << endl;
    return 0;
}