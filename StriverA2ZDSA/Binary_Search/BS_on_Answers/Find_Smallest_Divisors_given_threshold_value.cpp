#include <bits/stdc++.h>
using namespace std;
int bruteForce(vector<int> &arr, int t)
{
    int maxi = *max_element(arr.begin(), arr.end());
    for (int i = 1; i <= maxi; i++)
    {
        int sum = 0;

        for (int j = 0; j < arr.size(); j++)
        {
            sum += ceil((double)arr[j] / i);
        }

        if (sum <= t)
        {
            return i;
        }
    }

    return -1;
}

// Optimal Solution
int SumD(vector<int> &arr, int div)
{
    int sum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum += ceil((double)arr[i] / (double)div);
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int threshold)
{
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (SumD(arr, mid) <= threshold)
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
    vector<int> arr = {1, 2, 5, 9};
    int t = 6;
    cout << bruteForce(arr, t) << endl;
    cout << "optimal " << smallestDivisor(arr, t) << endl;
    return 0;
}