#include <bits/stdc++.h>
using namespace std;
int solution1(vector<int> &arr, int k)
{
    int i;
    for (i = 1; k > 0; i++)
    {
        if (!binary_search(arr.begin(), arr.end(), i))
        {
            --k;
        }
    }
    return --i;
}

int solution2(vector<int> &arr, int k)
{
    int expected = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k)
    {
        if (i < arr.size() && arr[i] == expected)
        {
            i++;
        }
        else
        {
            missingCount++;
        }
        expected++;
    }

    return expected - 1;
}

// most optimal
int missingK(vector<int> &vec, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int missing = vec[mid] - (mid + 1);
        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return k + high + 1;
}

int main()
{

    return 0;
}