#include <iostream>
#include <bits/stdc++.h>
/*
logic: last_Occurrence + first_occurrence + 1;
*/

using namespace std;

int firstOccurrence(vector<int> &arr, int k)
{
    int low = 0;
    int n = arr.size();
    int high = n - 1;
    int first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int k)
{
    int low = 0;
    int n = arr.size();
    int high = n - 1;
    int last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    int k = 4;
    if (firstOccurrence(arr, k) == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << lastOccurrence(arr, k) - firstOccurrence(arr, k) + 1 << endl;
    }
    return 0;
}
