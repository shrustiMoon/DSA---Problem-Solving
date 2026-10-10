
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {
        
        int n = nums1.size();
        long long k = (long long)k1 + k2;

        vector<int> diff(n);
        int maxDiff = 0;
        long long total = 0;

        // Step 1: Calculate absolute differences
        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            maxDiff = max(maxDiff, diff[i]);
            total += diff[i];
        }

        // If we can make all differences zero, stop
        if (total <= k) {
            return 0;
        }

        // Step 2: Binary search for the smallest
        // maximum difference achievable with k operations
        int low = 0;
        int high = maxDiff;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long operations = 0;

            // Count operations needed to make every
            // difference at most mid
            for (int d : diff) {
                if (d > mid) {
                    operations += d - mid;
                }
            }

            if (operations <= k) {
                // mid is achievable; try a smaller maximum
                high = mid;
            } else {
                // Too many operations needed
                low = mid + 1;
            }
        }

        int target = low;
        long long used = 0;

        // Step 3: Reduce every difference above target
        // down to target
        for (int& d : diff) {
            if (d > target) {
                used += d - target;
                d = target;
            }
        }

        // Step 4: Use leftover operations to reduce
        // some target values by one
        long long remaining = k - used;

        for (int& d : diff) {
            if (remaining == 0) {
                break;
            }

            if (d == target && d > 0) {
                d--;
                remaining--;
            }
        }

        // Step 5: Calculate the final sum of squares
        long long ans = 0;

        for (int d : diff) {
            ans += 1LL * d * d;
        }

        return ans;
    }
};
