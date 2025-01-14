class Solution {
public:
    int find_pivot(vector<int>& nums) {
        int s = 0; 
        int e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }

    int binary_search(vector<int>& nums, int target, int s, int e) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        int pivot = find_pivot(nums);
        if (target >= nums[pivot] && target <= nums[nums.size() - 1]) {
            return binary_search(nums, target, pivot, nums.size() - 1);
        } else {
            return binary_search(nums, target, 0, pivot - 1);
        }
    }
};
