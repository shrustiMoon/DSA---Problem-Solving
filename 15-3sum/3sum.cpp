class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // 3 SUM APPROACH - Using 3 pointers - i,j,k

        int n = nums.size();

        // Final answer
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        // Skip duplicate values of i
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            // 2 Pointers
            int j = i+1;
            int k = n-1;

            while(j<k){
                // Triplet sum to calculate 
                int sum = nums[i]+nums[j]+nums[k];

                if(sum<0) j++;   // Move left pointer to increase sum
                else if(sum>0) k--;  // Move right pointer to decrease sum
                else{               
                    // Triplet found then store
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    // Move pointers
                    j++;
                    k--;

                    // Skip duplicate values of j
                    while(j<k && nums[j]==nums[j-1]) j++;
                    // Skip duplicate value of k
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
    }
};