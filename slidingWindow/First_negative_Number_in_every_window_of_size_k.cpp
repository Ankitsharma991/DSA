#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;

    int i = 0, j = 0;
    vector<int> ans;
    while (j < size)
    {
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (arr[i] < 0)
            {
                ans.push_back(arr[i]);
            }
            i++;
            j++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}