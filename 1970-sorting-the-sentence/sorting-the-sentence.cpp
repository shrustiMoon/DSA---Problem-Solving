class Solution {
public:
    string sortSentence(string s) {
        // Get each word from string
        stringstream ss(s);
        string word;

        vector<string>ans(10);

        while(ss >> word){
            // Get the position
            int pos = word[word.size()-1]-'0';
            //Remove the number
            word.pop_back();
            // Put the word in correct position
            ans[pos] = word;
        } 
        string result = "";
        for(int i=1; i<10; i++){
            if(ans[i] != ""){
                if(result != ""){
                    result += " ";
                }
                result += ans[i];
            }
        }
        return result;      
    }
};