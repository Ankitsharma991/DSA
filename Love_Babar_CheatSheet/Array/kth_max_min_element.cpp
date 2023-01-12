class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> que;
        for(int i=0;i<=r;i++){
            que.push(arr[i]);
            if(que.size()>k){
                que.pop();
            }
        }
        int ans = que.top();
        return ans;
    }
};