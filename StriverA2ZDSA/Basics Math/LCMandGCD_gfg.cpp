#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

vector<long long> lcmAndGcd(long long A, long long B)
{
    vector<long long> ans;
    ans.push_back((A * B) / (gcd(A, B))); // for LCM
    ans.push_back(gcd(A, B));             // for GCD
    return ans;
}