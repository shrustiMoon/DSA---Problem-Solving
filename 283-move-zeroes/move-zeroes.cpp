class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // 2-pointer Approach
        int j = -1;
        int n = nums.size();

        // Find the first 0 element
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }

        if(j==-1) return;

        // To find non-zero element & swap
        for(int i=j+1; i<n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};