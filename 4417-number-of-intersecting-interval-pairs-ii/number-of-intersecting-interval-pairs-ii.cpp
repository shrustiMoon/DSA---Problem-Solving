class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(intervals.begin(), intervals.end());

        vector<int> ends;

        for(auto &interval : intervals) {
            ends.push_back(interval[1]);
        }

        sort(ends.begin(), ends.end());

        long long count = 0;

        for(int i = 0; i < n; i++) {
            int start = intervals[i][0];

            // Number of previous intervals = i
            // Find how many ends are < start
            int nonIntersecting =
                lower_bound(ends.begin(), ends.end(), start) - ends.begin();

            count += i - nonIntersecting;
        }

        return count;
    }
};