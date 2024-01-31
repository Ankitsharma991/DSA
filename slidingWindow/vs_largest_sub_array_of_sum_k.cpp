#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4, 1, 1, 1, 2, 3, 5};
    int i = 0, j = 0, maxLen = 0;
    long long sum = 0;
    int k = 5;
    int size = arr.size();
    while (j < size)
    {
        sum += arr[j];
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            maxLen = max(maxLen, j - i + 1);
            j++;
        }
        if (sum > k)
        {
            while (sum > k)
            {
                sum -= arr[i];
                i++;
            }
            j++;
        }
    }
    cout << maxLen << endl;
    return 0;
}