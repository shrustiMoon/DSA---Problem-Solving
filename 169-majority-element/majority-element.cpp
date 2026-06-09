class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // MOORES VOTING ALGORITHM
        int cnt = 0;
        int element;

        for(int i=0; i<nums.size(); i++){
            // When cnt becomes 0
            if(cnt == 0){
                cnt = 1;
                element = nums[i];
            }
            // When same element, increase the cnt
            else if(element == nums[i]) cnt++;
            // When different element, decrease the cnt
            else cnt--;
        }
        return element;
        
    }
};