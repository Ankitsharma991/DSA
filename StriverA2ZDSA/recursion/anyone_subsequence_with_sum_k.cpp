#include <iostream>
#include <vector>

using namespace std;

void printOneArray(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

bool findSeq(int idx, vector<int> &ans, int s, int sum, const int arr[], int n) {
    if (idx == n) {
        return s == sum;
    }
    ans.push_back(arr[idx]);
    s += arr[idx];
    if (findSeq(idx + 1, ans, s, sum, arr, n)) {
        return true;
    }
    s -= arr[idx];
    ans.pop_back();
    return findSeq(idx + 1, ans, s, sum, arr, n);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int sum = 5;
    int n = 4;
    vector<int> ans;
    if (findSeq(0, ans, 0, sum, arr, n)) {
        printOneArray(ans);
    } else {
        cout << "No sequence found with sum equal to " << sum << endl;
    }
    return 0;
}
