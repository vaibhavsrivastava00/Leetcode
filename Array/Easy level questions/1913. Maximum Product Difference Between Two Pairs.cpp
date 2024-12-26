#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = (nums[n - 2] * nums[n - 1]) - (nums[0] * nums[1]);
        return ans;
    }
};

int main() {
    vector<int> nums = {5, 6, 2, 7, 4};

    Solution sol;
    int result = sol.maxProductDifference(nums);

    cout << "Maximum Product Difference: " << result << endl;

    return 0;
}
