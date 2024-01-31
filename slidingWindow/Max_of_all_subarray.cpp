#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int size = arr.size();
    int k = 3;
    int i = 0, j = 0;

    list<int> l;
    vector<int> ans;

    while (j < size)
    {
        while (l.size() > 0 && l.back() < arr[j])
        {
            l.pop_back();
        }
        l.push_back(arr[j]);

        if (j - i + 1 < k)
        {
            j++;
        }
        if (j - i + 1 == k)
        {
            ans.push_back(l.front());
            if (l.front() == arr[i])
            {
                l.pop_front();
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