class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1 = "";
        string ans2 = "";
        for(string it1 : word1){
            ans1 = ans1 + it1;
        }
        for(string it2 :  word2){
            ans2 = ans2 + it2;
        }
        return (ans1 == ans2);
    }
};