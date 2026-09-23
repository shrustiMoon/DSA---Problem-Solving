class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int cnt = 0;
        int mid = (0 + nums.size()-1)/2;
        int ans_num = nums[mid];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==ans_num) cnt++;
        }
        if(cnt == 1) return true;
        else return false;
    }
};