class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            int reverse_value = 26 - (s[i]-'a');
            sum += reverse_value * (i+1);
        }
        return sum ;
    }
};