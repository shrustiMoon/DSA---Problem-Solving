class Solution {
public:
    bool isAnagram(string s, string t) {
        // Size of both string is unequal -> false
        if(s.size() != t.size()) return false;

        // Sort the strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for(int i=0; i<s.size(); i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};