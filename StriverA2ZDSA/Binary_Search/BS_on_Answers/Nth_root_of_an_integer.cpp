#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int product(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < a; i++)
    {
        ans *= b;
    }
    return ans;
}

int binarySearchForNthRoot(int num, int root)
{
    int ans = -1;
    int low = 1;
    int high = num;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int value = product(root, mid);
        if (value > num)
        {
            high = mid - 1;
        }
        else if (value < num)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            break;
        }
    }
    return ans;
}

int main()
{
    cout << binarySearchForNthRoot(69, 4) << endl;
    return 0;
}