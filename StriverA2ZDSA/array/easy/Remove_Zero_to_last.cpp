#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {6, 4, 5, 0, 2, 5, 0, 1, 4, 0, 2};
    int n = arr.size();

    // finding the first zero index
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // iterating through the array and swapping the zero and non-zero numbers
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}