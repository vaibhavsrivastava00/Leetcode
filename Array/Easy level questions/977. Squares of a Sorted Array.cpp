#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] *= nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-4, -1, 0, 3, 10}; // Example input
    vector<int> result = solution.sortedSquares(nums);

    cout << "Sorted squares: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
