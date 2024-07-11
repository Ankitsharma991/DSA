#include <bits/stdc++.h>
using namespace std;

bool f(int target, int ind, vector<int> &arr)
{
    if (target == 0)
        return true;
    if (ind == 0)
        return arr[0] == target;
    bool notTake = f(ind - 1, target, arr);
    bool take = false;
    if (arr[ind] <= target)
        take = f(ind - 1, target - arr[ind], arr);
    return take | notTake;
}

int main()
{
    vector<int> arr = {1, 5, 11, 5};
    int n = arr.size();

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int target = sum / 2;
    if (target % 2 != 0)
        return 0;
    else
        f(target, n - 1, arr);
}