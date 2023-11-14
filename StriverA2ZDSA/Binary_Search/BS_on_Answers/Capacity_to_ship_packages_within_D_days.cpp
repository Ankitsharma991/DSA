/*
Hint: The answer will always be in between the max element of the array and summation of the array
*/
#include <bits/stdc++.h>
using namespace std;
int findDays(vector<int> &arr, int cap)
{
    int days = 1;
    int load = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] + load > cap)
        {
            days += 1;
            load = arr[i];
        }
        else
        {
            load += arr[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int> &weights, int d)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int numberOfDays = findDays(weights, mid);
        if (numberOfDays <= d)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    cout << shipWithinDays(arr, days) << endl;
    return 0;
}