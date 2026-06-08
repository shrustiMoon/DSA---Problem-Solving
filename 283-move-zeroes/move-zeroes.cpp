class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;

        // Find 1st occurence of 0
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }

        // When no 0s exists
        if(j==-1) return;

        // Find non-zero element & swap them with 0s
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};