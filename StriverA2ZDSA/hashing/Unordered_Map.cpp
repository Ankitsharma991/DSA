// unordered map store data not in a particular manner, order varies from compiler to compiler
// advantage of using this is that it's have time complexity of only O(1) for storing and fetching data, i.e average and best case but linear in worst case (minor case), worst case happens due to internal collisions
/*
Hashing: 
    - Division Method: linear chaining using    linked list
    - Folding method:
    - Mid Square Method:
*/
// in map any particular data type can be a key but in unordered map it's limited to int, char, double and you cannot pair data type like (pair<int, int>, int)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    for (auto it : umap)
    {
        cout << it.first << "----" << it.second << endl;
    }

    return 0;
}