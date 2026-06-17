class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";

        for(int i=0; i<s.size(); i++){
            if(s[i]!=' ') 
              word += s[i];
            else if(!word.empty()){
              words.push_back(word);
              word = "";
            }
        }
        // Last word to add in list
        if(!word.empty())
           words.push_back(word);

        // Reverse the list of words
        reverse(words.begin(), words.end());

        // Join the words in list using spaces
        string result = "";
        for(int i=0; i<words.size(); i++){
            result += words[i];
            if(i<words.size()-1)
              result += " " ;
        }   
        return result;
    }
};