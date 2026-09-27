class Solution {
public:
    int numberOfMatches(int n) {
        int teams = n;
        int sum = 0;
        while(teams > 1){
            int matches = teams / 2;
            teams = teams - matches;
            sum = sum + matches;
        }
        return sum;
    }
};