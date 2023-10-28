
// array declared globally is initially filled with 0 in java and cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
{
    int highest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < sSmallest)
        {
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

// int secondLargest(int arr[], int n)
// {
//     int largest = largestElement(arr, n);
//     int secLar = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > secLar && arr[i] < largest)
//         {
//             secLar = arr[i];
//         }
//     }
//     return secLar;
// }

int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int n = 5;
    cout << "Largest: " << largestElement(arr, n) << endl;
    cout << "Second Largest: " << secondLargest(arr, n) << endl;
    cout << "Second Smallest: " << secondSmallest(arr, n) << endl;

    return 0;
}