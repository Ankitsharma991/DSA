#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void otherMethod(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();

    int i = 0, j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 4, 4, 5};
    vector<int> b = {2, 3, 3, 5, 6, 6, 7};

    int n1 = a.size();
    int n2 = b.size();

    vector<int> vs(n2, 0);
    vector<int> ans;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j] && vs[j] == 0)
            {
                ans.push_back(a[i]);
                vs[j] = 1;
                break;
            }
            if (b[j] > a[i])
            {
                break;
            }
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "other method" << endl;
    otherMethod(a, b);
    return 0;
}