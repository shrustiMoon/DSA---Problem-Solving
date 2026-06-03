class Solution {
public:
    bool isPalindrome(int x) {
        long reversenum = 0;
        int originalnum = x;
        while(x>0){
            int ld = x % 10;
            reversenum = (reversenum*10)+ld;
            x = x / 10;
        }
        if(reversenum==originalnum){
            return true;
        }
        else{
            return false;
        }
    }
};