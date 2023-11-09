#include <iostream>
#include <vector>
using namespace std;

int floorValue(const vector<int> &arr, int val)
{
    int s = 0;
    int e = arr.size() - 1;
    int floor = -1;

    while (s < e)
    {
        int mid = s + (e - s + 1) / 2;

        if (arr[mid] <= val)
        {
            floor = arr[mid];
            s = mid;
        }
        else
        {
            e = mid - 1;
        }
    }

    return floor;
}

int ceilValue(const vector<int> &arr, int val)
{
    int s = 0;
    int e = arr.size();
    int ceil = -1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= val)
        {
            ceil = arr[mid];
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ceil;
}

int main()
{
    vector<int> arr = {1, 2, 4, 6};
    int target = 5;
    cout << "Floor: " << floorValue(arr, target) << endl;
    cout << "Ceil: " << ceilValue(arr, target) << endl;
    return 0;
}
