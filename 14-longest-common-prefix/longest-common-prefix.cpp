class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        // If the array is empty
        if(strs.empty()) return "";

        // Sort the array
        sort(strs.begin(), strs.end());

        string first = strs[0];             // first in sorted array
        string last = strs[strs.size()-1];  // last in sorted array
        // Find the minimum length
        int minLength = min(first.size(), last.size());

        for(int i=0; i<minLength; i++){
            if(first[i]!=last[i]) break;
            ans += first[i];
        }
        return ans;
    }
};