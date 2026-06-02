class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Using 2 Pointer Approach
        int n = nums.size();
        int j = -1;

        // To find the 1st 0 present
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }

        if(j==-1) return;
        // To find the non-zero element & swap
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};