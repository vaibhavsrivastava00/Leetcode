class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0,j = 0, k = 0;
        vector<int> temp;
        int n = nums1.size();
        int m = nums2.size();
        while (i<n && j<m){
            if(nums1[i] < nums2[j]){
                temp.push_back(nums1[i++]);
            }
            else{
                temp.push_back(nums2[j++]);
            }
        }
        while(i<n){
            temp.push_back(nums1[i++]);
        }
        while(j<m){
            temp.push_back(nums2[j++]);
        }
        int totalSize = temp.size();
        if (totalSize % 2 == 0) {
            return (temp[totalSize / 2 - 1] + temp[totalSize / 2]) / 2.0;
        } else {
            return temp[totalSize / 2];
        }
    }
};