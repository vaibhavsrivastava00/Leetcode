class Solution {
public:
    void solve(vector<vector<int>>& ans,int index,vector<int>& nums){
        if(index >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(ans,index+1,nums);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> ans;
        solve(ans,index,nums);
        return ans;
    }
};