class Solution {
public:
    string sortString(string s) {
        int freq[26] = {0};

        // Count the characters
        for(char c : s){
            freq[c-'a']++;
        }

        string ans = "";

        while(ans.size() < s.size()){
            // Increasing: a -> z
            for(int i=0; i<26; i++){
                if(freq[i]>0){
                   ans += char(i+'a');
                   freq[i]--;
                }
            }
            // Decreasing: z -> a
            for(int i=25; i>=0; i--){
                if(freq[i]>0){
                    ans += char(i+'a');
                    freq[i]--;
                }
            }
        }
        return ans;
    }
};