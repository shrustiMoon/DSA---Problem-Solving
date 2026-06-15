class Solution {
public:
    bool PossibleSum(vector<int>& nums, int barrier, int k){
        int n = nums.size();
        int split = 1;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>barrier) return false;
            if(sum+nums[i]>barrier){
                split += 1;
                sum = nums[i];
            }
            else{
                sum += nums[i];
            }
        }
        if(split>k) return false;
        else return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        int low = INT_MIN;
        int high = 0;
        int res = -1;
        for(auto it : nums){
            low = max(low,it);   // minimum element
            high += it;         // sum of elements
        }
        while(low<=high){
            int mid = (low+high)/2;
            if(PossibleSum(nums,mid,k)==true){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return res;
    }
};