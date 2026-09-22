class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // MOORES VOTING ALGORITHMN
        int cnt = 0;
        int element;

        // If cnt becomes 0
        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                cnt = cnt + 1;
                element = nums[i];
            }
            // If same element found, increase cnt
            else if(nums[i]==element) cnt++;
            // If different element found, decrease cnt
            else cnt--;
        }
        return element;
    }
};