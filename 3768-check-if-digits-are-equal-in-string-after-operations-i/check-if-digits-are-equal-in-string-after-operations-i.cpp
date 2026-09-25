class Solution {
public:
    string Operation(string s){
        string temp = "";

        for(int i=0; i<s.size()-1; i++){
            int add = (s[i]-'0') + (s[i+1]-'0');
            int mod = add % 10;
            temp += (mod + '0');
        }
        return temp;
    }

    bool hasSameDigits(string s) {
        while(s.size()>2){
            s = Operation(s);
        }
        return (s[0]==s[1]);
    }
};