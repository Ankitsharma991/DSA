#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 7;
    int sum = 0;
    map<int, int> preSumMap;
    int maxLen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        // for sub-array with 0 as it's element
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    cout << maxLen << endl;
    return 0;
}