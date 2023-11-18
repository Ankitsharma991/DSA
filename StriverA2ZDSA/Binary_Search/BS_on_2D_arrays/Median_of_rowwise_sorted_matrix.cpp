#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<vector<int>> &arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            ans.push_back(arr[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    int n = ans.size();
    if (n % 2 == 0)
    {
        int data = ans[(n / 2) - 1];
        return data;
    }
    else
    {
        return ans[(ans[(n / 2) - 1] + ans[n / 2]) / 2];
    }
}

// optimal

int countSmallerThanMid(vector<int> &row, int mid)
{
    int l = 0;
    int h = row.size() - 1;
    while (l <= h)
    {
        int md = (l + h) >> 1;
        if (row[md] <= mid)
        {
            l = md + 1;
        }
        else
        {
            h = md - 1;
        }
    }
    return l;
}

int findMedian(vector<vector<int>> &arr)
{
    int l = 0;
    int h = 1e9;
    int n = arr.size();
    int m = arr[0].size();

    while (l <= h)
    {
        int mid = (l + h) >> 1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += countSmallerThanMid(arr[i], mid);
        }

        if (cnt <= (n * m) / 2)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return l;
}




int main()
{
    vector<vector<int>> arr = {{1, 3, 6}, {2, 6, 9}, {3, 6, 9}};
    cout << bruteForce(arr) << endl;
    cout<<findMedian(arr)<<endl;
    return 0;
}