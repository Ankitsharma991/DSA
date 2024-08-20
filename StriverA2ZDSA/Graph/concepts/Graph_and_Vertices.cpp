#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long count(int n) {
        long long totalEdges = (n * (n - 1)) / 2;
        return pow(2, totalEdges);
    }
};

int main(){
    
    return 0;
}