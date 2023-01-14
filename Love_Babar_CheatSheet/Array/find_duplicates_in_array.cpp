// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
       if(arr[0]==0 && n>1) return -1;
        if(n==1) return 0;
        int high = 0;
        int current = 0;
        int step = 0;
        
        for(int i = 0; i<n-1; i++){
            high = max(high,i+arr[i]);
            if(i==current){
                step++;
                current=high;
            }
        }
        
        if(current<n-1) return -1;
        return step;
    }
};