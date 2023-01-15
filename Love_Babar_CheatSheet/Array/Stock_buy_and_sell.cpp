class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int>> stockBuySell(vector<int> A, int n){
        // code here
        int b;
        int s;
        vector<vector<int>> ans;
        
        for(int i=0;i<n-1;i++){
            if(A[i]<A[i+1]){
                b=i;
                while((A[i]<A[i+1]) && i<n-1){
                    i++;
                }
                s=i;
                ans.push_back({b,s});
            }
        }
        return ans;
    }
};