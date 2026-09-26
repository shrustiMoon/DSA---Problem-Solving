class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int col = coordinates[0]-'a'+1;
        int row = coordinates[1]-'0';

        if((col+row)%2==1) return true;
        else return false;
    }
};