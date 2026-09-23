class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        // Find the total sum
        for(int num : nums){
            total += num;
        }
        // Find the not required sum
        int target = total - x;

        // If target is negative, impossible
        if(target < 0) return -1;
        // If target is 0, remove everything
        if(target == 0) return nums.size();

        int left = 0;
        int sum = 0;
        int maxLen = -1;

        // Sliding Window
        for(int right=0; right<nums.size(); right++){
            sum = sum + nums[right];

            while(sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target) 
               maxLen = max(maxLen, right-left+1);
        }
        // No subarray found
        if(maxLen == -1) return -1;
        // Minimum removals
        return nums.size()-maxLen;
    }
};