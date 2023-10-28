#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 8};
    int i = 1;
    for (int j = 0; j < vec.size(); j++)
    {
        if (vec[j] != i)
        {
            break;
        }
        i++;
    }
    cout << i << endl;
    return 0;
}