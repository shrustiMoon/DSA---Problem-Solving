class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        
        // Add non-zeros elements to temp
        for(int i=0; i<n; i++){
            if(nums[i]!=0) temp.push_back(nums[i]);
        }
        // Add elements back into nums
        for(int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }
        // Add the 0s to remaining places
        for(int i=temp.size(); i<n; i++){
            nums[i] = 0;
        }
    }
};