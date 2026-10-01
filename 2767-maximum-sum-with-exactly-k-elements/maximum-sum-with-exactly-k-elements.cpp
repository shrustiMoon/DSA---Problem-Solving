class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());

        int max_num = nums[0];
        int sum = 0;
        for(int i=0; i<k; i++){
            sum = sum + max_num;
            max_num++;
        }
        return sum;
    }
};