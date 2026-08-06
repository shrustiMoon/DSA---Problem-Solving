class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans(nums.size());
        //Calculate entire array ka sum from initial value 0
        int sum = accumulate(begin(nums),end(nums),0);
        int curr = 0;
        for(int i=0; i<nums.size(); i++){
            int leftSum = curr;
            curr = curr + nums[i];
            int rightSum = sum-curr;
            ans[i] = abs(rightSum-leftSum);
        }
        return ans;
    }
};