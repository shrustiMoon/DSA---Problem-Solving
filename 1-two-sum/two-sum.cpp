class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            // Calculate the required number
            int req = target - a;

            // Find the required number
            if(mpp.find(req)!=mpp.end()){
                return {mpp[req],i};
            }

            // Store the number in map
            mpp[a] = i;
        }
        return {};
    }
};