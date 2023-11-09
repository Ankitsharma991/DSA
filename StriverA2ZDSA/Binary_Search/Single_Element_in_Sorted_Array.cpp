#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int low = 1;
    int high = n - 2;
    if (n == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[n - 1] != arr[n - 2])
        return arr[n - 1];

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            return arr[mid];
        }
        // we are in left
        if (mid % 2 == 1 && arr[mid] == arr[mid - 1] || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
        {
            low = mid + 1;
        }
        else
        { // we are on right.
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    cout << singleNonDuplicate(arr) << endl;
    return 0;
}