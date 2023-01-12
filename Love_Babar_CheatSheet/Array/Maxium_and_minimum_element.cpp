#include <bits/stdc++.h>
using namespace std;
int main()
{

    pair<long long, long long> getMinMax(long long a[], int n)
    {
        int min = INT_MAX;
        int max = INT_MIN;

        pair<long long, long long> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        ans.first = min;
        ans.second = max;
        // return ans;
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}