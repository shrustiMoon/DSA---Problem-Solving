class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count = count + 1;
                max_cnt = max(max_cnt, count);
            }
            else {
                count = 0;
            }
        }
        return max_cnt;
    }
};