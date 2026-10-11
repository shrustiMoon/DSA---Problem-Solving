class Solution {
public:
    string toBinary(int n){
        string ans = "";

        while(n>0){
            ans = char('0' + n % 2) + ans;
            n = n / 2;
        }
        return ans;
    }
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        return toBinary(year) + "-" + 
               toBinary(month) + "-" + 
               toBinary(day);
    }
};