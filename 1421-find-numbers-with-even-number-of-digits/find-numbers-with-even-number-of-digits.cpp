class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int digits_cnt = 0;
            while(num>0){
                int ld = num % 10;
                digits_cnt++;
                num = num / 10;
            }
            if(digits_cnt%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};