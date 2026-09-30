class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;

        // Count the total no of subsets
        int count = (1<<n);

        for(int val=0; val < count; val++){
            vector<int>list;
            for(int i=0; i<n; i++){
                if(val & (1<<i)){
                    list.push_back(nums[i]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};