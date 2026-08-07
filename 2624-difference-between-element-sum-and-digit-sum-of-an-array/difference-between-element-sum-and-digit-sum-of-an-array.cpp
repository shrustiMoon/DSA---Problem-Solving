class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int total_sum = 0;
        for(auto it : nums){
            total_sum = total_sum + it;
        }
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            while(nums[i]>0){
                int lastdigit = nums[i]%10;
                sum = sum + lastdigit;
                nums[i] = nums[i]/10;
            }
        }
        return (total_sum - sum);
    }
};