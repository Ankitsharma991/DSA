#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int D;
    cin >> D;

    vector<int> arr = {-1,-100,3,99};
    int size = arr.size();
    int d = size-(D % size);
    vector<int> temp(d);

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < size; i++)
    {
        arr[i - d] = arr[i];
    }

    int j = 0;
    for (int i = size - d; i < size; i++)
    {
        arr[i] = temp[j];
        j++;
    }

    for (const int &num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
