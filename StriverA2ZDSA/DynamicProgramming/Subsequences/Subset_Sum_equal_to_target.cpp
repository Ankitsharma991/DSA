#include <bits/stdc++.h>
using namespace std;

bool f(int ind, int target, vector<int> &arr)
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
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target = 10;
    int n = 6;
    cout << f(n - 1, target, arr) << endl;
}