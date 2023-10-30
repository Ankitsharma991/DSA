#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();

    vector<int> pos;
    vector<int> neg;


    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    // int N = max(nn, np);

    int i=0, j=0;
    int index = 0;
    while(i<pos.size() && j<neg.size()){
        arr[index++] = pos[i++];
        arr[index++] = neg[j++];
    }

    while(i<pos.size()){
        arr[index++] = pos[i++];
    }

    while(j<neg.size()){
        arr[index++] = neg[j++];
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}