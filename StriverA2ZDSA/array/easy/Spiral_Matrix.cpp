#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
This Question is having only one way/method to solve and that is optimal in itself.
move through the matrix in given pattern:
    right -> bottom -> left -> top.
    for a 5x5 matrix
    top = 0,    bottom = 5
    left = 0, right = 5

- for left to right :
    for(int i=0 to right){
        matrix[top][i];
    }
    top++;

- for top to bottom
    for(int i=top to bottom){
        print(matrix[i][right]);
    }
    right--;

- for right to left:
    for(int i=right to left){
        print(matrix[bottom][i]);
    }
    bottom--;

- for bottom to top:
    for(int i=bottom to top){
        print(matrix[i][left]);
    }
    left++;
*/

int main()
{

    // vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = matrix.size();    // rows
    int m = matrix[0].size(); // columns
    vector<int> ans;
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;

    while (top <= bottom && left <= right)
    {
        // left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // right to left
        for (int i = right; i >= left; i--)
        {
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        // bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}