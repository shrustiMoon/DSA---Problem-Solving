class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int, int>mpp;
        for(auto x : nums){
            mpp[x]++;

            if(mpp[x]==n){
                return x;
            }
        }
        return -1;
    }
};