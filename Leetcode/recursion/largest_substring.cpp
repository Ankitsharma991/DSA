class Solution {
public:
    void subSeq(vector<int> nums, int index, vector<int> output, set<vector<int>>& ans){
        if(index>=nums.size()){
            if(output.size()>1)
                ans.insert(output);
            return ;
        }
        if(output.size()==0 || nums[index] >= output.back()){
            output.push_back(nums[index]);
            subSeq(nums, index+1, output, ans);
            output.pop_back();
        }
        subSeq(nums, index+1, output, ans);
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> output;
        set<vector<int>> ans;
        subSeq(nums, 0, output, ans);
        return vector(ans.begin(), ans.end());
    }
};