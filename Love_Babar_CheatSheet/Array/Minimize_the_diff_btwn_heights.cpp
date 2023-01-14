class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1){
            return 0;
        }
        sort(arr, arr+n);
        int mini=0, maxi=0;
        int result = arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-k<0){
                continue;
            }
            int high = arr[i];
            int lower = high-k;
            
            int low = arr[i-1];
            int higher = low+k;
            
            mini = min(lower,arr[0]+k);
            maxi = max(higher,arr[n-1]-k);
            
            result = min(result, maxi-mini);
        }
        return result;
    }
};