class Solution {
public:
    int find_sum(vector<int>& nums, int s, int e) {
        int sum = 0;
        for (int i = s; i <= e; i++) {
            sum += nums[i];
        }
        return sum;
    }

    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = find_sum(nums, 0, n - 1); 
        int left_sum = 0; 

        for (int i = 0; i < n; i++) {
            int right_sum = totalSum - left_sum - nums[i]; 
            if (left_sum == right_sum) {
                return i; 
            }

            left_sum += nums[i]; 
        }

        return -1; 
    }
};
