class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        int product = 1;
        int sum = 0;

        for(int i=0; i<s.size(); i++){
            product = product * (s[i]-'0');
            sum = sum + (s[i]-'0');
        }
        return (product - sum);
    }
};