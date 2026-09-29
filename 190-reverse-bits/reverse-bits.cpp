class Solution {
public:
    int reverseBits(int n) {
        string ans = "";
        for(int i = 0; i < 32; i++) {
            if(n % 2 == 1)
                ans += '1';
            else
                ans += '0';

            n = n / 2;
        }
        // ans currently contains reversed bits
        // Convert it to number
        int result = 0;
        for(int i = 0; i < 32; i++) {
            result = result * 2 + (ans[i] - '0');
        }
        return result;
    }
};