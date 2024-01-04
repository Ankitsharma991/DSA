#include <bits/stdc++.h>
using namespace std;

// brute forece approach
vector<int> uniqueElements(vector<int> &arr)
{
    int n = arr.size();
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt == 1)
            a.emplace_back(arr[i]);
    }
    return a;
};

// optimised code: using map
vector<int> optimised(vector<int> &arr)
{
    map<int, int> mp;
    int n = arr.size();
}
int main()
{

    return 0;
}