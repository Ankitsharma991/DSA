#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader==true)
        {
            ans.push_back(arr[i]);
        }
    }
    // ans.push_back(arr[n - 1]);
    sort(ans.begin(), ans.end());

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}