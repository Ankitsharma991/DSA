#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bruteApproach(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();

    set<int> s;

    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }

    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {3, 4, 5, 6, 7, 8};
    vector<int> unionArr;

    int n1 = arr1.size();
    int n2 = arr2.size();

    // Optimal solution
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    for (auto it : unionArr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}