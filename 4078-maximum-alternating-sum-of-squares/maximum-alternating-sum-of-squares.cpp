class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs((long long)a) < abs((long long)b);
        });

        int n = nums.size();
        long long score = 0;

        for (int i = 0; i < n; i++) {
            long long square = 1LL * nums[i] * nums[i];

            if (i < n / 2) {
                score -= square;
            } else {
                score += square;
            }
        }

        return score;
    }
};
