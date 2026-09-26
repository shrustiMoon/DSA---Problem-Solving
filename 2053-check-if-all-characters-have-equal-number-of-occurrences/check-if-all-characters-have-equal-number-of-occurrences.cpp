class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int hash[26] = {0};
        // Count characters
        for(int i=0; i<s.size(); i++){
                hash[s[i]-'a']++;
        }
        // Count freq of first character
        int freq = hash[s[0]-'a'];
        // Check freq of all characters
        for(int i=0; i<26; i++){
            if(hash[i]!=0 && hash[i]!=freq)
               return false;
        }
        return true;
    }
};