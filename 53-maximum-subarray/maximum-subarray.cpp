class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            // Calculate sum 
            sum = sum + nums[i];

            // If sum greater than maxi, update it
            if(sum>maxi) maxi = sum;

            // If sum becomes negative, Update it to 0
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};