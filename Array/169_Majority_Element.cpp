class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count;
        int maxCount = 0;  
        int majorityElement = nums[0];  
        
        for (int i = 0; i < n; i += count) {
            count = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count > maxCount) { 
                maxCount = count;
                majorityElement = nums[i];
            }
        }
        return majorityElement;
    }
};
