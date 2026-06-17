class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;

        // Find the last odd digit
        for(int i=num.length()-1; i>=0; i--){
            if((num[i]-'0')%2 == 1){
                index = i;
                break;
            }
        }
        // Skip the leading 0s upto index
        int i=0;
        while(i<=index && num[i]=='0') i++;

        // Return the substring from 1st non-zero to odd digit
        return num.substr(i, index-i+1);
    }
};