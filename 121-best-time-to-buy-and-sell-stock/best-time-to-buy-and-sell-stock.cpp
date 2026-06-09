class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxProfit = INT_MIN;
        for(int i=0; i<prices.size(); i++){
            int cost = prices[i] - mini;
            mini = min(mini, prices[i]);
            maxProfit = max(maxProfit, cost);
        }
        return maxProfit;
    }
};