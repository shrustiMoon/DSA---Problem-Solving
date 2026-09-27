class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            int num = i;
            // Convert the decimal -> binary
            string result = "";

            if(num == 0) result = '0';
            while(num > 0){
                if(num%2 == 1) result += '1';
                else result += '0';
                num = num / 2;
            }
            reverse(result.begin(), result.end());

            // Count the the 1's
            int count = 0;
            for(int j=0; j<result.size(); j++){
                if(result[j]=='1'){
                    count++;
                }
            }
            if(count == k){
                sum = sum + nums[i];
            }
        }
        return sum;
    }
};