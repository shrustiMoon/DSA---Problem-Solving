class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string>mpp;
        // Store knowledge
        for(auto it : knowledge){
            mpp[it[0]] = it[1];
        }
        string ans = "";

        // Traverse the string
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                string key = "";
                i++;

                // Get the key
                while(s[i]!=')'){
                    key += s[i];
                    i++;
                }
                // Find value
                if(mpp.find(key)!=mpp.end()){
                    ans += mpp[key];
                }
                else
                   ans += '?';
            }
            else {
            ans += s[i];
            }
        }
        return ans;
    }
};