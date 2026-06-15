class Solution {
public:
    bool SubarrayPossible(int barrier,vector<int>& nums,int k){
        int n = nums.size();
        int split = 1;
        int subarraySum = 0;
        for(int i=0; i<n; i++){
            if(nums[i]>barrier) return false;
            if(subarraySum+nums[i]>barrier){
                split += 1;
                subarraySum = nums[i];
            }
            else{
                subarraySum += nums[i];
            }
        }
        if(split>k) return false;
        else return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        int low = INT_MIN;
        int high = 0;
        int ans = -1;
        // To find search space
        for(auto it : nums){
            low = max(low,it);
            high += it;
        }
        while(low<=high){
            int mid = (low+high)/2;
            if(SubarrayPossible(mid,nums,k)==true){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};