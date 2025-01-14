class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0; 
        
        int minPrice = INT_MAX; 
        int maxProfit = 0;   
        for (int i = 0; i < n; ++i) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                maxProfit = std::max(maxProfit, prices[i] - minPrice);
            }
        }

        return maxProfit;
    }
};
