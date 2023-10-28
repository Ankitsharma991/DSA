#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 3, 2, 4, 5, 8, 6, 0, 1, 2};
    int n = arr.size();

    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < i + 3; j++)
        {
            sum += arr[j];
        }
        if (sum >= maxSum)
        {
            maxSum = sum;
        }
        sum = 0;
    }

    if (sum >= maxSum)
    {
        sum = maxSum;
    }
    cout << maxSum << endl;
    ;
    return 0;
}