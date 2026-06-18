class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        // Sort the array strs
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];

        // Find the minimum length
        int MinLength = min(first.size(), last.size());

        for(int i=0; i<MinLength; i++){
            if(first[i]!=last[i]) break;
            ans += first[i];
        }
        return ans;
;    }
};