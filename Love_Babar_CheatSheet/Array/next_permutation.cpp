class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         sort(intervals.begin(), intervals.end());
         vector<vector<int>> ans;
         int n=intervals.size();
         for(int i=0;i<n;i++){
             if(ans.empty() || ans.back()[1]<intervals[i][0]){
                 vector<int>temp=intervals[i];
                 ans.push_back(temp);
             }
             else{
                 ans.back()[1]=max(ans.back()[1],intervals[i][1]);
             }
         }
         return ans;
    }
};