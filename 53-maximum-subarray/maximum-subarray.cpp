class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // KADANE's ALGORITHMN
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];

            // Update the maximun sum
            if(sum>maxi) maxi = sum;

            // Reset the sum
            if(sum<0) sum =0;
        }
        return maxi;
    }
};