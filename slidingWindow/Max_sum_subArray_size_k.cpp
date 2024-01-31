#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 5;

    int i = 0;
    int j = 0;
    int sum = 0;
    int maxSum = INT_MIN;

    while (j < arr.size())
    {
        sum += arr[j];
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            maxSum = max(sum, maxSum);
            sum -= arr[i];
            i++;
            j++;
        }
    }

    cout << maxSum << endl;
    return 0;
}