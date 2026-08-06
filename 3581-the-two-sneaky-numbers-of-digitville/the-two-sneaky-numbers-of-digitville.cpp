class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        // Adding elements in map
        for(auto num : nums){
            freq[num]++;
        }
        // Storing elements appearing twice
        for(auto it : freq){
            if(it.second == 2) ans.push_back(it.first);
        }
        return ans;
    }
};