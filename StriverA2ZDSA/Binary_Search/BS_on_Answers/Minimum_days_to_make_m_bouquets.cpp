#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &flower, int day, int m, int k)
{
    int count = 0;
    int n = flower.size();
    int noB = 0;
    for (int i = 0; i < n; i++)
    {
        if (flower[i] <= day)
        {
            count++;
        }
        else
        {
            noB += (count / k);
            count = 0;
        }
    }
    noB += (count / k);
    return noB >= m;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    int left = 1, right = *max_element(bloomDay.begin(), bloomDay.end());

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (isPossible(bloomDay, mid, m, k))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return isPossible(bloomDay, left, m, k) ? left : -1;
}

int main()
{
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3;
    int k = 2;

    cout << minDays(bloomDay, m, k) << endl;
    return 0;
}