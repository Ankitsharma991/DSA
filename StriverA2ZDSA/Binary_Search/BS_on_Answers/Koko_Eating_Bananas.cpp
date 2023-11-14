#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int> &v)
{
    int maxi = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &v, int hourly)
{
    int totalH = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)v[i] / (double)hourly);
    }
    return totalH;
}

int main()
{
    vector<int> arr = {3, 6, 2, 8};
    int h = 2;
    int low = 1;
    int high = findMax(arr);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(arr, mid);
        if (totalH <= h)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << low << endl;

    return 0;
}