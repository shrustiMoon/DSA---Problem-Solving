class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int reverse_index = 0;
        for(int i=0; i<s.size(); i++){
            reverse_index = 26 - (s[i]-'a');
            sum = sum + (reverse_index * (i+1));
        }
        return sum;
    }
};