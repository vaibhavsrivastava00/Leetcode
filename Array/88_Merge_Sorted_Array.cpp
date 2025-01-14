class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        
        int i = 0 ;
        int j = 0;
        int k = 0;
        vector<int> temp;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                temp.push_back(nums1[i++]);
                k++;
            }
            else{
                temp.push_back(nums2[j++]);
                k++;
            }
        }
        while(i<n){
            temp.push_back(nums1[i++]);
                k++;
        }
        while(j<m){
            temp.push_back(nums2[j++]);
                k++;
        }

        copy(temp.begin(), temp.end(), nums1.begin());

    }
};