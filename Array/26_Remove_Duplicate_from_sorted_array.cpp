class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int ch ;
        for (int right = 0; right < nums.size(); right++) {
            ch = nums[left];
            if (nums[right] != ch) {
                swap(nums[right], nums[left+1]);
                left++;
            }
        } 
        return left+1;
    }
};