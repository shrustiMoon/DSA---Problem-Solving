class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        int lower[26] = {0};
        int upper[26] = {0};

        // Mark the lower-case characters
        for(int i=0; i<word.size(); i++){
            if(word[i]>='a' && word[i]<='z'){
                lower[word[i]-'a'] = 1;
            }
        }
        // Marks the upper-case characters
        for(int i=0; i<word.size(); i++){
            if(word[i]>='A' && word[i]<='Z'){
                upper[word[i]-'A'] = 1;
            }
        }
        for(int i=0; i<26; i++){
            if(lower[i]==1 && upper[i]==1){
               count++;
            }
        }
        return count;
    }
};