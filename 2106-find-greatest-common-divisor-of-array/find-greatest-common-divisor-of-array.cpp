class Solution {
public:
    int findGCD(vector<int>& nums) {
        int gcd;
        int max_num = *max_element(nums.begin(), nums.end());
        int min_num = *min_element(nums.begin(), nums.end());
        for(int i=1; i<=max_num; i++){
            if(max_num%i==0 && min_num%i==0){
                gcd = i;
            }
        }
        return gcd;
    }
};