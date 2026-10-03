class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0; i<prices.size(); i++){
            int discount = prices[i];
            for(int j=i+1; j<prices.size(); j++){
                if(prices[i]>=prices[j]){
                    discount = abs(prices[i]-prices[j]);
                    break;
                }
            }
            ans.push_back(discount);
        }
        return ans;
    }
};