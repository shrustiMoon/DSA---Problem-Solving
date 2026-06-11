class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sorting in ascending order
        sort(intervals.begin(),intervals.end());

        vector<vector<int>>ans;
        for(int i=0; i<intervals.size(); i++){
            // If empty or out of interval element 
            if(ans.empty() || intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                // Expand if Overlapping
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
        }
        return ans;
    }
};