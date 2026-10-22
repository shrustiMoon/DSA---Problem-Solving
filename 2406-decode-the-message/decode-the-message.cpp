class Solution {
public:
    string decodeMessage(string key, string message) {
        char mp[26];
        char ch = 'a';

        for(char c : key){
            if(c !=' ' && mp[c-'a']==0){
                mp[c-'a'] = ch;
                ch++;
            }
        }
        for(int i=0; i<message.size(); i++){
            if(message[i] != ' '){
                message[i] = mp[message[i] - 'a'];
            }
        }
        return message;
    }
};