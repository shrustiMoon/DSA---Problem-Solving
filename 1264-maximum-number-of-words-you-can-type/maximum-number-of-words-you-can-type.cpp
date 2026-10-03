class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans = 0;
        for(int i=0; i<text.size(); i++){
            bool canType = true;
            while(i<text.size() && text[i]!=' '){
                for(int j=0; j<brokenLetters.size(); j++){
                    if(text[i]==brokenLetters[j]){
                        canType = false;
                    }
                }
                i++;
            }
            if(canType == true) ans++;
        }
        return ans;
    }
}; 