class Solution {
public:
    int mySqrt(int x) {
        int s = 0 ;
        int e = x;
        long long int mid = s+(e-s)/2;
        long long int sqr ;
        int ans = -1;
        while(s<=e){
            sqr = mid*mid;
            if(x == sqr){
                return mid;
            }
            else if(sqr<x){
                ans = mid;
                s = mid+1;
                
            }
            else{
                e= mid-1;
            }
            mid = s+(e-s)/2;
        }  
        return ans; 
    }
};