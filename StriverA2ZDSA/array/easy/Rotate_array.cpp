#include <iostream>
using namespace std;
int main()
{
    int nums[] = {2, 3, 4, 5, 1};
    int size = 5;

    // Rotate array
    int temp = nums[0];
    for (int i = 1; i < size; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[size - 1] = temp;

    // Print rotated array
    for (auto it : nums)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}