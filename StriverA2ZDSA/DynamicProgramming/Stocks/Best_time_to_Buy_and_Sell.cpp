#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i=1;i<n;i++){
        int cost = prices[i] - minPrice;
        maxProfit = max(maxProfit, cost);
        minPrice = min(minPrice, prices[i]);
    }
    cout<<maxProfit<<endl;
    return 0;
}