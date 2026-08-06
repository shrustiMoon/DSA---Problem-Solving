class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(auto it : friends){
            mpp[it]++;
        }
        for(auto t : order){
            if(mpp[t]!=0){
                ans.push_back(t);
            }
        }
        return ans;
    }
};