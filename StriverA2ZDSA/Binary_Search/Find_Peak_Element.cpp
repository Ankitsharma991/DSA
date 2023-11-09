#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linearApproach(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || arr[i - 1] < arr[i])
        {
            if (i == n - 1 || arr[i] > arr[i + 1])
            {
                return arr[i];
            }
        }
    }
    return -1;
}

int peakElementIndex(vector<int> &arr)
{
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    cout << peakElementIndex(arr) << endl;
    cout << linearApproach(arr) << endl;
    return 0;
}