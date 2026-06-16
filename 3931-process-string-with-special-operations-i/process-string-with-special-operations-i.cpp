class Solution {
public:
    string processStr(string s) {
        string result;

        for(char c : s){
            if(c>='a' && c<='z')       // lowercase letter -> append
               result.push_back(c);
            else if(c == '*'){        // removes last character
                if(!result.empty())
                  result.pop_back(); 
            } 
            else if(c == '#')          // duplicate result
                result += result;
            else if(c == '%')          // reverse result
                reverse(result.begin(), result.end());   
        }
        return result;
    }
};