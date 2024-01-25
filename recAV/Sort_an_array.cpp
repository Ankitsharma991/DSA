#include <bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    sortArr(v);
    insertArr(v, temp);
    return;
};

void insertArr(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    insertArr(v, temp);
    v.push_back(val);
    return;
};

int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    sortArr(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return;
}
