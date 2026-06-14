class Solution {
public:
    // Function to find maximum in nums
    int Find_Max(vector<int>& nums){
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
    // Function to Calculate Sum
    long long CalcSum(vector<int>& nums, int mid){
        int n = nums.size();
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += ceil((double)nums[i]/mid);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = Find_Max(nums);
        int ans = -1;

        while(low<=high){
            int mid = (low+high)/2;

            // Function to calculate ceilsum
            if(CalcSum(nums,mid)<=threshold){
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