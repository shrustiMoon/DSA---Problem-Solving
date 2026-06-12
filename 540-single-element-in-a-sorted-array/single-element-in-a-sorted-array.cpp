class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        // If only one element in array
        if(n==1) return nums[0];
        // If first element is single element
        if(nums[0]!=nums[1]) return nums[0];
        // If last element is single element
        if(nums[n-1]!=nums[n-2]) return nums[n-1];

        // Search space updates
        int low = 1;
        int high = n-2;

        while(low<=high){

            // Find middle index
            int mid = (low+high)/2;

            // Check if current element is different from its neighbours
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) 
               return nums[mid];

            // We are on left
            if((mid%2==1 && nums[mid-1]==nums[mid]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                low = mid+1;     // eliminate left
            }
            // We are on right
            else{
                high = mid-1;   // eliminate right
            }
        }
        return -1;
    }
};