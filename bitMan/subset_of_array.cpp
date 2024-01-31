#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 2, 4};
    int n = arr.size();

    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> subArr;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subArr.push_back(arr[j]);
            }
        }
        cout << "{";
        for (auto it : subArr)
        {
            cout << it;
        }
        cout << "}, ";
    }
    cout << endl;

    return 0;
}
