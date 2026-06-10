class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        // Store 1st index as Sum = 0 in map
        mpp[0] = 1;
        int Sum = 0;
        int cnt = 0;

        for(int i=0; i<nums.size(); i++){
            // Calculate Sum
            Sum = Sum + nums[i];
            // Calculate required number
            int req = Sum - k;
            // Update the cnt by adding frequency
            cnt += mpp[req];
            // Store the curent Sum in map
            mpp[Sum]++;
        }
        return cnt;
    }
};