class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int maxDepth = 0;
        for(char ch : s){
            if(ch == '(') counter++;
            else if(ch == ')') counter--; 
            maxDepth = max(maxDepth,counter);
        }
        return maxDepth;
    }
};