#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 0, 1, 0, 1, 2, 1, 2, 1, 0, 0, 2, 1, 2, 0};
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            c0++;
        }
        else if (a[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }


    for (int i = 0; i < a.size(); i++)
    {
        if (i < c0)
        {
            a[i] = 0;
        }
        else if (i >= c0 && i < c1+c0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 2;
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}