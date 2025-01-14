class Solution {
public:
    bool possible_solution(vector<int>& nums, int k, int mid, int n){
        int sum = 0;
        int k_count = 1;
        for(int i = 0;i<n;i++){
            if(nums[i]>mid){
                return false;
            }
            if(sum + nums[i] <= mid){
                sum += nums[i];
            }
            else{
                k_count++;
                if(k_count > k){
                    return false;
                }
                sum = nums[i];
            }
        }
    return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            sum+= nums[i];
        }
        int e = sum;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(possible_solution(nums,k,mid,n)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};