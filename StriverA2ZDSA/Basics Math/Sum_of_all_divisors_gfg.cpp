#include<iostream>
using namespace std;
class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum=0;
        int i=1;
        while(i<=N){
            sum+=(N/i)*i;
            i++;
        }
        return sum;
    }
};