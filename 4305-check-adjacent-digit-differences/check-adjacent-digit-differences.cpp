class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int max_diff = INT_MIN;
        for(int i=0; i<s.size()-1; i++){
            int diff = abs(s[i]-s[i+1]);
            max_diff = max(max_diff, diff);
        }
        if(max_diff<=2) return true;
        else return false;
    }
};