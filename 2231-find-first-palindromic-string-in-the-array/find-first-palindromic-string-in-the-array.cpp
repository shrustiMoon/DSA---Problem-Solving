class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            string word = words[i];
            string rev = word;

            reverse(rev.begin(), rev.end());

            if(word == rev){
                return word;
            }
        }
        return "";
    }
};