class Solution {
public:
    bool checkGoodInteger(int n) {
        // Calculate digitSum
        int digitSum = 0;
        int squareSum = 0;
        while(n>0){
        int lastdigit = n % 10;
        digitSum = digitSum + lastdigit;
        squareSum = squareSum + (lastdigit*lastdigit);
        n = n / 10;
        }
        if(squareSum - digitSum >= 50) return true;
        else return false;
    }
};