class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int bit_or = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                bit_or = bit_or | nums[i];
            }
        }
        return bit_or;
    }
};