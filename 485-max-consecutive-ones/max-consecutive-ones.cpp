class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                cnt++;
                max_count = max(cnt, max_count);
            }
            else{
                cnt = 0;
            }
        }
        return max_count;
    }
};