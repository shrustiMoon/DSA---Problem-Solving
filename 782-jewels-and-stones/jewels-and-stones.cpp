class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        unordered_set<char>st;
        for(char ch : jewels){
            st.insert(ch);
        }
        for(char c : stones){
            if(st.count(c)){
                cnt++;
            }
        }
        return cnt;
    }
};