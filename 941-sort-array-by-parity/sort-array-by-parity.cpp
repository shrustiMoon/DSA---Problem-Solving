class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        // Put even numbers first
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
            }
        }
        // Put odd numbers afterward
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 != 0) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};