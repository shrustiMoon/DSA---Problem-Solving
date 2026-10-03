class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int sum = 0;
        for(auto x : mpp){
            if(x.second%k==0){
                sum = sum + (x.first * x.second);
            }
        }
        return sum;
    }
};