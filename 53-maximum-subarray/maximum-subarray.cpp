class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane Algorithmn
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];

            // Set the maximun sum
            if(sum>maxi) maxi = sum;

            // Reset the sum if negative
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};