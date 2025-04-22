class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi = INT_MIN;
        int curr_mini = prices[0];

        for(int i=0; i<n-1; i++) {
            if(prices[i] < prices[i+1]) {
                if(prices[i] < curr_mini) {
                    curr_mini = prices[i];
                }

                maxi = max(maxi, prices[i+1] - curr_mini);
            }
        }
        
        return maxi == INT_MIN ? 0 : maxi;
    }
};