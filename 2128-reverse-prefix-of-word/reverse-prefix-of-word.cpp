class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end_index = -1;
        for(int i=0; i<word.size(); i++){
            if(word[i] == ch){
                end_index = i;
                break;
            }
        }

        reverse(word.begin(), word.begin() + end_index + 1);
        return word;
    }
};