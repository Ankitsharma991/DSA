#include <bits/stdc++.h>
using namespace std;

void bruteForce(vector<vector<int>> &matrix)
{
    int count = INT_MIN;
    int row = -1;
    for (int i = 0; i < matrix.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 1)
            {
                temp++;
            }
        }
        if (temp > count)
        {
            count = temp;
            row = i;
        }
    }
    cout << "row number is: " << row << " and 1s are: " << count << endl;
}

// Optimal Solution
int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int cnt_max = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt_ones = m = lowerBound(matrix[i], m, 1);
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 0, 1},
        {1, 1, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 1, 1}};
    bruteForce(matrix);
    return 0;
}