class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini_time = INT_MAX;
        for(int i=0; i<tasks.size(); i++){
                int time = (tasks[i][1] + tasks[i][0]);
                mini_time = min(mini_time, time);
        }
        return mini_time;
    }
};