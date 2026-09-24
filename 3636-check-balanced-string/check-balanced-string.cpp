class Solution {
public:
    bool isBalanced(string num) {
        int even_sum = 0;
        int odd_sum = 0;
        for(int i=0; i<num.size(); i++){
            if(i%2 == 0) even_sum += (num[i]-'0');
            else odd_sum += (num[i]-'0');
        }
        if(even_sum == odd_sum) return true;
        else return false;
    }
};