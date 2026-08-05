class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int rem;
        int ans = 0;
        for(auto num : nums){
            rem = num % 3;
            ans += min(rem, 3-rem);
        }
        return ans;
    }
};