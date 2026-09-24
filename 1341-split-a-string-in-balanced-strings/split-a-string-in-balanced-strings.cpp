class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='R') cnt++;
            if(s[i]=='L') cnt--;
            if(cnt == 0) count = count+1;
        }
        return count;
    }
};