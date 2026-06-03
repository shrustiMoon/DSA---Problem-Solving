class Solution {
public:
    int reverse(int x) {
        long sum = 0;
        while(x!=0){
            int ld = x % 10;
            sum = (sum*10)+ld;
            x = x / 10;
        }
        if(sum<INT_MIN || sum>INT_MAX){
            return 0;
        }
        else{
            return (int)sum;
        }
    }
};