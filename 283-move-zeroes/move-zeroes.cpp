class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 2-pointer Approach
        int j = -1;
        int n = nums.size();

        // Find the first occurence of 0
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        if(j==-1) return;
        
        // Swap the non-zero element with 0
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};