#include <bits/stdc++.h>
using namespace std;
bool canPlace(vector<int> &arr, int mid, int cows)
{
    int cntCows = 1;
    int last = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - last >= mid)
        {
            cntCows++;
            last = arr[i];
        }
        if (cntCows >= cows)
            return true;
    }
    return false;
}

int optimal(vector<int> &arr, int cows)
{
    int low = arr[0];
    int n = arr.size();
    int high = arr[n - 1] - arr[0];
    sort(arr.begin(), arr.end());
    // int ans

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (canPlace(arr, mid, cows) == true)
        {
            high = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
int main()
{

    return 0;
}