#include <iostream>
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

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Largest Element : " << largestElement(arr, n) << endl;
    return 0;
}