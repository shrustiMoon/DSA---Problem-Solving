class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // Sort in descending order of cost
        sort(cost.rbegin(), cost.rend());
        int sum = 0;
        for(int i=0; i<cost.size(); i=i+3){
            sum += cost[i];

            if(i+1 < cost.size()){
                sum += cost[i+1];
            }
        }
        return sum;

    }
};