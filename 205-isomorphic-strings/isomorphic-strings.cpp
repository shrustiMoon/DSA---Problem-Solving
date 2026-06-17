class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Arrays to store last seen position of character
        int m1[256] = {0};
        int m2[256] = {0};

        int n = s.size();

        // Traverse each character of strings
        for(int i=0; i<n; i++){
            // if previous positions of current characters differ
            if(m1[s[i]] != m2[t[i]]) return false;

            m1[s[i]] = i+1;
            m2[t[i]] = i+1;
        }
        return true;
    }
};