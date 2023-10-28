// Rotate any array by : D%n times where n is size of array and D is given value of rotations.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int D;
    cin >> D;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = D % size;
    int temp[d];

    // Storing first d value of array in temp array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // rotating the the array element after d index with d index
    for (int i = d; i < size; i++)
    {
        arr[i - d] = arr[i];
    }

    // rotating the first d indexed value of arr at the last
    int j = 0;
    for (int i = size - d; i < size; i++)
    {
        arr[i] = temp[j];
        j++;
    }

    // Printing the rotated array
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}